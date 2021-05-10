#include <stdio.h>
struct student {
    char regno[20];
    char name[20];
    int age;
    float gpa;
}s[20];

void main(){
    struct student *p = NULL;
    p = s;
    int n,i=0;
    printf("Enter Number of elements : ");
    scanf("%d",&n);
    while(i<n){
        printf("Enter the DETAILS : ");
        scanf("%s", p->regno);
        scanf("%s", p->name);
        scanf("%d", &p->age);
        scanf("%f", &p->gpa);
        printf("%s %s %d %f", p->regno, p->name, p->age, p->gpa);
        p++;
        i++;
    }

    
    


}