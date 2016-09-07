#include<stdio.h>
void main(){

int a = 1025;
int *p;
p = &a;

char *c;
c =(char*) p;

printf("%d",*c);

printf("%d",*(c+1));


void *q;
q = p;

printf("%d",q);

}
