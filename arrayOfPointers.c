#include<stdio.h>
const int MAX = 3;
void main(){
    int var[] = {10,20,30};
    int *p[MAX];
    for (int i=0;i<MAX;i++){
        p[i] = &var[i]; // assigning the address of integers
    }
    for (int i=0;i<MAX;i++){
        printf("%x\n", p[i]);
    }
    for (int i=0;i<MAX;i++){
        printf("%d\n", *p[i]);
    }
}