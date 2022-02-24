#include <stdio.h>
#include <stdlib.h>

int main(){
    int age = 18;
    int * pAge = &age;
    double cgpa = 3.0;
    double * pCgpa = &cgpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("Age memory address: %p\nCGPA memory address: %p\nGrade memory address: %p", pAge, pCgpa, pGrade);
return 0;
}