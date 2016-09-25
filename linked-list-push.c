#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;
};

void push(struct node **head_ref, int data){

    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;

}


void print(struct node *head){

    while(head != NULL){

        printf("%d", head->data);
        head = head->next;

    }

}





int main(){

struct node* head = NULL;

push(&head,6);
push(&head,7);
push(&head,8);

struct node* temp= head;

print(temp);

return 0;
}
