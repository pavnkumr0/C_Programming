#include <stdio.h>
#include <stdlib.h>
typedef struct node_type node_t;

struct node_type {
    int val;
    struct node_type *next;     // data type of the pointer is struct node_type
};

void display(node_t *head){
    if(head == NULL) {
        printf("LInked list empty");
        return;
    }
    node_t* traverse_ptr = head;
    while (traverse_ptr != NULL)
    {
        printf("%d -> ", traverse_ptr->val);
        // traverse_ptr
    }    
}

node_t* create_new_node(int value){
    node_t* new_node = (node_t *)malloc(sizeof(node_t));
    new_node->val = value;
    new_node->next = NULL;
    return new_node; 
}

node_t** append(node_t** head, int value){ // Why do we use double pointer
    node_t* new_node =  create_new_node(value);
    if(*head == NULL){
        *head = new_node;
        return head;
    }
    node_t* traverse_ptr = *head;
    while (traverse_ptr->next != NULL)
    {
        traverse_ptr = traverse_ptr->next;
        traverse_ptr->next = new_node;
        return head;
    }
    
    return head;
}

void remove_node(node_t *prev_node){
    free(prev_node->next);
    prev_node->next = NULL;
}

void delete_node_at_idx(node_t **head, size_t idx){
    node_t *traverse_ptr = *head;
    if(idx == 0 && *head != NULL){
        *head = (*head)->next;
        free(traverse_ptr);
        return;
    }

    for(size_t traverse_idx = 0; traverse_idx < idx; traverse_idx++){
        if(traverse_ptr == NULL) return;
        traverse_ptr = traverse_ptr->next;
    }
    node_t* next_node = NULL;
    if(traverse_ptr->next != NULL){
        next_node = traverse_ptr->next->next;
    }
    remove_node(traverse_ptr);
    traverse_ptr->next = next_node;
}
// scenerio
// lINked list is empty
// index is the last index of the linked list
// the index is the first index of the linked list
// index is between the three or more linked lst;
// index is greater than the max size of the linked list
// index is negative
// linked containes only one node and input is 0


// question
// 1) detect loop in the linked list.




void clear_ll(node_t ** head){
    node_t *traverse_ptr = *head;
    while(traverse_ptr != NULL){
        *head = (*head)->next;
        free(traverse_ptr);
        traverse_ptr = *head;
    }
}



int main(){
    node_t *head = NULL; // initially the linked list is empty so we initialize with NULL
    display(head);
    append(&head,2);
    display(head);
    append(&head,3);
    display(head);
    append(&head,4);
    display(head);
    clear_ll(head);
    return 0;
}