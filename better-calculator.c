#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1;
    int num2;
    char op;

    printf("Enter your number: ");
    scanf("%d", &num1);
    printf("Enter your operator: ");
    scanf(" %c", &op);
    printf("Enter your number: ");
    scanf("%d", &num2);

    if(op == '+'){
        printf("%d", num1 + num2);
    }else if(op == '-'){
        printf("%d", num1 - num2);
    }else if(op == '/'){
        printf("%d", num1 / num2);    
    }else if(op == '*'){
        printf("%d", num1 * num2);
    }else{
        printf("Invalid Operator");
    }
}
