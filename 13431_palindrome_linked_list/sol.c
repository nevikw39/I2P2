#include "sol.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while (~scanf("%d", &n))
    {
        node *head = malloc(sizeof(node)), *cur = head;
        while (n--)
        {
            scanf("%d", &(cur->val));
            if (n)
                cur = cur->next = malloc(sizeof(node));
            else
                cur->next = NULL;
        }
        putchar_unlocked(is_palindrome(head) ? 'T' : 'F');
        while (head)
        {
            node *tmp = head;
            head = head->next;
            free(tmp);
        }
    }
    putchar_unlocked('\n');
    return 0;
}
