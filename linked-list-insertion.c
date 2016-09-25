#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};

void print(struct node* head){

    while(head != NULL){

        printf("%d", head->data);
        head = head->next;

    }

}

// insert at the first

void insert(int data, struct node** head_ref){

struct *newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = data;
newnode -> next = *head;
*head = newnode;

}

int main(){

struct node* head = (struct node*)malloc(sizeof(struct node));
struct node* second = NULL;
struct node* third = NULL;



second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));


head->data = 1;
head->next = second;

second->data = 2;
second->next = third;

third->data = 3;
third->next = NULL;


struct node *temp = head;

print(temp);


return 0;
}
