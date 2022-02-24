#include <stdio.h>
#include <stdlib.h>

int main(){
    char grade = 'A';

    switch(grade)
    {
    case 'A':
    printf("You did great!");
        break;
    case 'B':
    printf("You did well!");
        break;
    case 'C':
    printf("You did poorly!");
        break;
    case 'D':
    printf("You did very bad!");
        break;   
    case 'F':
    printf("You Failed!");
        break; 
    default:
        printf("You entered a invalid grade!");
    }
    return 0;
}