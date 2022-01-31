#include <stdio.h>
#include <stdlib.h>
#include "sol.h"

int main()
{
    int n, c;
    while (~scanf("%d%d", &n, &c))
    {
        node *head = malloc(sizeof(node)), *cur = head;
        for (int i = 1; i < n; i++)
            cur = cur->next = malloc(sizeof(node));
        if (!~c)
            cur->next = NULL;
        else
        {
            cur->next = head;
            while (c--)
                cur->next = cur->next->next;
        }
        if (detect_cycle(head) != cur->next)
        {
            puts("WA");
            return 0;
        }
        puts("AC");
        while (n--)
        {
            cur = head;
            head = head->next;
            free(cur);
        }
    }
    return 0;
}
