#include <stdbool.h>
#include <stdlib.h>

typedef struct _node
{
    int val;
    struct _node *next;
} node;

bool is_palindrome(node *head) // return non-zero value if the linked list is a palindrome, otherwise 0
{
    node *tortoise = head, *hare = head;
    while (hare && hare->next) // the tortoise crawl one node whereas the hare jump twonodes per round
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
    }
    if (hare) // if the length of the linked list is odd
        tortoise = tortoise->next;
    // Then we reverse the back half of the linked list
    node *cur = tortoise, *pre = NULL;
    while (cur)
    {
        node *tmp = cur->next;
        cur->next = pre;
        pre = cur;
        cur = tmp;
    }
    // Eventually we determine whether two halves are equal
    while (head && pre)
    {
        if (head->val != pre->val)
            return false;
        head = head->next;
        pre = pre->next;
    }
    return true;
}
