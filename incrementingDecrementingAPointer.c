#include<stdio.h>
 const int MAX = 3;
 int main(){
     int arr[] = {10,20,30};
     int *p;
     p = arr;// var = &var[0]
     for (int i = 0;i<MAX;i++){
         printf("Address 0f arr[%d] = %x\n", i, p);
         printf("Value of arr[%d] = %d\n", i, *p);
         p++;//incrementing a pointer
     }
 }