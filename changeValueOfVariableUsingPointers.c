#include <stdio.h>
void main(){
    int x = 100;
    int *p;
    p = &x;
    printf("%x\n", &x);
    printf("%d\n", x);
    printf("%x\n", p);
    printf("%d", *p);
    // changing value of x manually;
    x = 50;
    printf("%x\n", p);
    printf("%d\n", *p);
    // changing value using pointer
    *p = 25;
    printf("%x\n", &x);
    printf("%d\n", x);
    printf("%x\n", p);
    printf("%d", *p);



}