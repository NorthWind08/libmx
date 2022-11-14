#include "libmx.h"

void mx_push_back(t_list **list , void *data) {
    if (!*list) {
        *list = mx_create_node(data);
        return;
    }
    t_list *temp = *list;
    t_list *node = mx_create_node(data);
    while (temp != 0) {
        temp = temp->next;
    }
    temp->next = node;
    node->next = 0;
}
