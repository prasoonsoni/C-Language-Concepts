#include <stdio.h>
void main(){
    int num1,num2,sum;
    scanf("%d\n%d", &num1,&num2);
    int *p1, *p2, *s;
    p1 = &num1;
    p2 = &num2;
    sum = *p1 + *p2;
    s = &sum;
    printf("%d\n", sum);
    printf("%u\n%u\n%u",p1,p2,s);
}