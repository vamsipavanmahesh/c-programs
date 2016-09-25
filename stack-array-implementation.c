#include<stdio.h>

#define MAX 100

int A[MAX];

int top = -1;

void push(int x){

    if(top == MAX-1){

       printf("STack Overflow\n");
       return;
    }

    top = top + 1;
    A[top] = x;

}


void pop(){

    top = top -1;

}


void isEmpty(){

    if(top== -1){

        printf("The Stack is empty\n");
    }else{

        printf("The Stack is not empty \n");

    }

}


void Print(){

    printf("stack is ");
    int i=0;

    for(i=0;i<=top;i++){
        printf("%d",A[i]);
    }

}


int main(void){

isEmpty();

push(6);

Print();

push(7);

Print();

pop();

Print();



return 0;
}
