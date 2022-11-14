#include "libmx.h"

void mx_pop_back(t_list **list) {
    if(!*list) {
        return;
    }
    t_list *temp = *list;
    if (list == 0)
        return;
    while(temp->next != 0) {
        temp = temp->next;
    }
    free(temp);
}
