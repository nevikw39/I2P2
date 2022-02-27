/**                  _ _              _____ ___
 *  _ __   _____   _(_) | ____      _|___ // _ \
 * | '_ \ / _ \ \ / / | |/ /\ \ /\ / / |_ \ (_) |
 * | | | |  __/\ V /| |   <  \ V  V / ___) \__, |
 * |_| |_|\___| \_/ |_|_|\_\  \_/\_/ |____/  /_/
 **/
#include <assert.h>
#include <ctype.h>
#include <inttypes.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef nevikw39
#else
#pragma message("hello, nevikw39")
#endif
#pragma message("GL; HF!")

#define N 100000

typedef struct _edge // the linked list node of edges of a vertex
{
    int v, w;
    struct _edge *next;
} edge;
edge *head[N];

void update(int *ptr1, int *ptr2, int x) // update the max and second max value
{
    if (*ptr1 < x)
    {
        *ptr2 = *ptr1;
        *ptr1 = x;
    }
    else if (*ptr2 < x && x < *ptr1)
        *ptr2 = x;
}

int *dfs(int u, int p)
{
    int *arr = malloc(sizeof(int) << 2); // the state of the current root
    arr[0] = arr[2] = 0;                 // the diameter of current tree; the longest distance starting from root
    arr[1] = arr[3] = INT_MIN;           // the 2nd longest distance of current tree; the 2nd longest distance starting from root
    for (edge *ptr = head[u]; ptr; ptr = ptr->next)
    {
        if (ptr->v == p)
            continue;
        int *brr = dfs(ptr->v, u);
        update(arr, arr + 1, brr[0]);
        update(arr, arr + 1, brr[1]);
        update(arr, arr + 1, arr[2] + ptr->w + brr[3]);
        update(arr, arr + 1, arr[2] + ptr->w + brr[2]);
        update(arr, arr + 1, arr[3] + ptr->w + brr[2]);
        update(arr + 2, arr + 3, ptr->w + brr[2]);
        update(arr + 2, arr + 3, ptr->w + brr[3]);
        free(brr);
    }
    return arr;
}

edge *new_adge(int v, int w, edge *next)
{
    edge *y = malloc(sizeof(edge));
    *y = (edge){.v = v, .w = w, .next = next};
    return y;
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        head[i] = NULL;
    for (int i = 1; i < n; i++)
    {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        head[u] = new_adge(v, w, head[u]);
        head[v] = new_adge(u, w, head[v]);
    }
    printf("%d\n", dfs(0, -1)[1]);
    return 0;
}