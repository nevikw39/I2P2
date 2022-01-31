typedef struct _node
{
    struct _node *next;
} node;

node *detect_cycle(node *head); // TODO: Implement this function to detect the cycle int the linked list. If there doesn't exist, return NULL.
