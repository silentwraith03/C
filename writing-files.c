#include <stdlib.h>
#include <stdio.h>

/*int main(){
    FILE * fpointer = fopen("names.txt", "w");   //to write/overwrite file

    fprintf(fpointer, "Walter White->Heisenberg\nHank->Cop\nJesse->Junkie");

    fclose(fpointer);
return 0;
}*/
int main(){
    FILE * fpointer = fopen("names.txt", "a"); //to append in existing file

    fprintf(fpointer, "\nDevyanshu->Coder\nKrishna->Geek\nLakshya->Extraordinary Multitalented Guy");

    fclose(fpointer);
return 0;
}
