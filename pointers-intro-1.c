#include<stdio.h>

void main(){

    int a=5;
    int *p;
    p = &a;
    printf("size of integer is %d\n",sizeof(int));
    printf("address of p is %d\n",p);
    printf("value of p is %d\n",p+1);
    return 0;
}
