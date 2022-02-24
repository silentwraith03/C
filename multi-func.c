#include <stdio.h>
#include <stdlib.h>

//funtion_1
/*int main(){
    printf("GG\n");
    sayHi();
    printf("re\n");
    return 0;
}
void sayHi(){
    printf("ez\nNo\n");
}*/

//function_2
int main(){
    sayHi("Hank", 44);
    sayHi("Walter", 55);
    sayHi("Mike", 67);
    return 0;   
}
void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}
