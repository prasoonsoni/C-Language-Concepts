#include<stdio.h>
#include<stdlib.h>
struct student{
    char regno[20];
    char name[20];
    int age;
    float gpa;
};
void main(){
    struct student *p;
    p = (struct student*)malloc(sizeof(struct student));

    scanf("%s%s%d%f", p->regno, p->name, &p->age, &p->gpa);
    printf("%s %s %d %.2f", p->regno, p->name, p->age, p->gpa);

}