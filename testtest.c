#include <stdio.h>
#include <stdlib.h>
int main(){
char fname[15];
char lname[15];
printf("enter first name: ");
scanf("%s",&fname);
printf("enter last name: ");
scanf("%s",&lname);
printf("concat first and last name %s/n",strcat(fname,lname));
return 0;
}