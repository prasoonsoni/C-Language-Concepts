#include<stdio.h>
#include<stdlib.h>
struct student{
    char regno[20];
    char name[20];
    int age;
    float gpa;
};
void main(){
    int n,i=0;
    scanf("%d", &n);
    struct student *p;
    p = (struct student*)malloc(n*sizeof(struct student));
    while (i<n){
        scanf("%s%s%d%f", p->regno, p->name, &p->age, &p->gpa);
        printf("%s %s %d %.2f", p->regno, p->name, p->age, p->gpa);
        p++;
        i++;
    }

}