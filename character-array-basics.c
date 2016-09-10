#include<stdio.h>

void print(char *c){

    while(*c != '\0' ){


        printf("%c",*c);
        *c++;

    }
    printf("\n");
}


int main(void){

    char name[] = "vamsi pavan mahesh"; // string literal where \0 is implicit
    print(name);
    printf("program execution finished");
    return 0;
}
