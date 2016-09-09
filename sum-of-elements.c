#include<stdio.h>

int sum_of_elements(int a[], int size){
    int i;
    int sum = 0;
    for(i=0;i<size;i++){
        sum = sum + a[i];
    }

    return sum;

}




int main(void){

int a[] = {1,2,3,4,5};
int size = sizeof(a)/sizeof(a[0]);
printf("size is %d\n",size);
int total = sum_of_elements(a, size);
printf("the total is %d", total);
return 0;
}
