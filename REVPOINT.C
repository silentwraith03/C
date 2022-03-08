#include<stdio.h>
#include<conio.h>

void main()
{
int *pn, *pr;
int n, rem, rev=0, num;
clrscr();
printf("Enter a number:\n");
scanf("%d",&n);
num = n;
pn = &n;
pr = &rev;
while(*pn != 0)
{
rem = *pn%10;
*pr = (*pr*10)+rem;
*pn = *pn/10;
}
printf("Reverse of %d = %d", num, *pr);
getch();
}