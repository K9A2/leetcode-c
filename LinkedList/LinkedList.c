#ifndef LINKED_LIST_C
#define LINKED_LIST_C

#include <stdio.h>
#include <stdlib.h>

#endif

#include "LinkedList.h"

/* Print the given list on console */
void printList(struct ListNode *head) {
    struct ListNode *temp = head;
    while (temp != NULL) {
        printf("%d, ", temp->val);
        temp = temp->next;
    }
}
