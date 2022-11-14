#include "libmx.h"

int mx_list_size(t_list *list) {
    if (list == 0)
        return 0;
    if (list->next == 0)
        return 1;
    
    t_list *temp = list;
    int len = 1;
    while (temp->next != 0) {
        temp = temp->next;
        len++;
    }
    return len;
}
