#include <stdio.h>

void main(){
    int n;
    int sum = 0;
    printf("Enter number of elements ? ");
    scanf("%d", &n);
    int arr[n];
    int *p = arr;
    for(int i=0;i<n;i++){
        printf("Enter elements ? ");
        scanf("%d", p+i);
        sum += (*(p+i));
    }
    printf("%d",sum);
}