#include <stdio.h>
#include <stdlib.h>

int cube(int num){
    return num*num*num;
}

int main(){
    printf("Answer: %d", cube(3));
}