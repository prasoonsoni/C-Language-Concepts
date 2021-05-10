#include<stdio.h>
#include<stdlib.h>
void main(){
    int **matrix , r , c , i , j , sum=0;
    printf("Enter Number of rows: ");
    scanf("%d",&r);
    printf("Enter Number of columns: ");
    scanf("%d",&c);
    matrix = (int**)malloc(r*sizeof(int*));
    for(i=0;i<r;i++){
        matrix[i] = (int*)malloc(c*sizeof(int*));
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter Element: ");
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i!=j){
                sum=sum+matrix[i][j];
            }
        }
    }
    printf("Sum of non-diagnol elements is %d",sum);
}