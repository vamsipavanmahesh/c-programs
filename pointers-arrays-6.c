#include<stdio.h>

int main(){

int a[5] = {2,3,4,5,6};

printf("first element of array is %d\n",*a);
printf("address of array a is %d\n",a);

int i;
for(i=0 ; i<5 ; i++){

printf("address of current element is %d\n", a+i);
printf("value of current element is %d\n",*(a+i));

}


return 0;
}
