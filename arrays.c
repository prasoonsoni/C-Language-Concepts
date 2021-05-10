/*
how to declare an array
datatype name [arr_size];*/
// int a[10] = {1,2,3,4,5};
// float marks[5] = {1.0,2.0,3.0};
// char name[50] = {"a","b","c"};
// double avg[70];

#include <stdio.h>
int main(){
    int num[5],i;
    for (i = 0;i<5;i++){
        scanf("%d",&num[i]);   
    }
    for (i = 0;i<5;i++){
        printf("%d\n",num[i]);
    }
}
