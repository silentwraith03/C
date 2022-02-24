#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[20];
    char subject[10];
    int age;
    double gpa;
};

int main(){
    
    struct Student student1;
    student1.age = 18;
    student1.gpa = 3.2;
    strcpy(student1.name, "Kunal");
    strcpy(student1.subject, "Maths");

    struct Student student2;
    student2.age = 18;
    student2.gpa = 5.0;
    strcpy(student2.name, "Krishna");
    strcpy(student2.subject, "HTML");
    
    printf("%d", student2.age);
    
    return 0;
}