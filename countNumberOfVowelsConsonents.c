#include <stdio.h>
void main(){
    char str[100], *p;
    int vowels = 0, consonent = 0;
    printf("Enter String : ");
    gets(str);
    p = str;
    while(*p!='\0'){
        if (*p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U'){
            vowels++;
        } else {
            consonent++;
        }
        p++;
    }
    printf("Number of Vowels %d\n", vowels);
    printf("Number of Consonent %d\n", consonent);
}