#include <stdio.h>
void main(){
    int x = 10;
    int *p; //creating pointer variable
    p = &x; // storing adress of x
    printf("%x\n", p);//address stored in pointer variable
    printf("%x\n", &x);
    printf("%d\n", x);// print value assigned to variable
    printf("%d\n", *p);// access the value using pointer


}