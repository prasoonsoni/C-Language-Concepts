#include <stdio.h>
void main(){
    int arr[5]={3,4,5,6,7};
    int *p = arr;
    for (int i = 0 ;i<=4;i++){
        printf("%u %d\n", p+i, *p+i);
    }
}