#include <stdio.h>
int main(){
    int i,n,sum=0;
    scanf("%d\n",&n);
    int marks[n];
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    for(i=0;i<n;i++){
        sum+=marks[i];
    }
    float average = sum/n;
    printf("%.2f",average);
}