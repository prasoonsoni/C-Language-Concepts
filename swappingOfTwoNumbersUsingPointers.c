#include <stdio.h>
void swap(int *x, int *y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("The changed values are %d and %d \n",*x,*y);
}
void main(){
    int a,b;
    printf("Enter the values: ");
    scanf("%d %d", &a,&b);
    printf("The values are %d and %d \n", a,b);
    swap(&a,&b);
}