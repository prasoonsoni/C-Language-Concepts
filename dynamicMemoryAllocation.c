#include<stdio.h>
#include<stdlib.h>
void main(){
    int n, *p, even=0, odd=0;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    p = (int*) malloc(n*sizeof(int));
    if(p==NULL){
        printf("Error ! memory not allocated");
        exit(0);
    } else {
        for (int i = 0;i<n;i++){
            printf("Enter element %d : ", i+1);
            scanf("%d", p+i);
        }
        for (int i=0;i<n;i++){
            if (*(p+i) % 2==0){
                even++;
            } else {
                odd++;
            }
        }
        printf("Number of even are = %d\n", even);
        printf("Number of odd are = %d", odd);
    }

}
