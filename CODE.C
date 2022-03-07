#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],n,i,j,max,t;
int *p=&arr[0];
clrscr();
printf("size of an array");
scanf("%d",&n);
printf("Enter the no.");
for(i=0;i<n;i++)
{
scanf("%d",&*(p+i));
}
max=arr[0];
for(i=1;i<n;i++)
{
if(max<*(p+i))
{
t=*(p+i);
*(p+i)=max;
max=t;
}
}
printf("max=%d",max);
getch();
}