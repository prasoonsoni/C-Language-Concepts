#include <stdio.h>
struct student {
    char regno[20];
    char name[20];
    int age;
    float gpa;
}s;

void main(){
    struct student *p;
    p = &s;
    printf("Enter the DETAILS : ");
    gets(p->regno);
    gets(p->name);
    scanf("%d", &p->age);
    scanf("%f", &p->gpa);
    printf("%s\n%s\n%d\n%f\n", p->regno, p->name, p->age, p->gpa);


}