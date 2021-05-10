#include <stdio.h>
int main(){
int i,max,size;
scanf("%d",&size);
int list[size];
for (i=0;i<size;i++)
{
scanf("%d",&list[i]);
}
max = list[0];
for (i=1;i<size;i++)
{
if (list[i]>max)
{
max = list[i];
}
}
printf("%d",max);
}