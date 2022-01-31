#include <stdlib.h>

typedef struct _node
{
    struct _node *next;
} node;

node *detect_cycle(node *head)
{
    // TODO: Implement this function to detect the cycle int the linked list. If there doesn't exist, return NULL.
    int p = 1, l = 1;
    node *t = head, *h = t ? t->next : NULL;
    while (!h || t != h)
    {
        if (!h)
            return NULL;
        if (l == p)
        {
            t = h;
            l = 0;
            p <<= 1;
        }
        h = h->next;
        ++l;
    }
    t = h = head;
    while (l--)
        h = h->next;
    while (t != h)
    {
        t = t->next;
        h = h->next;
    }
    return t;
}
