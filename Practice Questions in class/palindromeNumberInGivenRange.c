#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int);

void main(){
    int lowerRange, upperRange, i;
    printf("Enter lower range: ");
    scanf("%d",&lowerRange);
    printf("Enter upper range: ");
    scanf("%d",&upperRange);
    printf("<--Palindrome Numbers are-->\n");
    for(i=lowerRange;i<=upperRange;i++){
        if(isPalindrome(i)){
            printf("\t%d\n",i);
        } else {
            continue;
        }
    }
}
bool isPalindrome(int num){
    int r;
    int temp = num;
    int revNum = 0;
    while(temp){
        r = temp%10;
        temp = temp/10;
        revNum = (revNum*10) + r;
    }
    if(revNum==num && num>10){
        return true;
    } else {
        return false;
    }
}
