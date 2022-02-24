#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityFN[20];
    char celebrityLN[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity name: ");
    scanf("%s%s", celebrityFN, celebrityLN);

    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("You like %s %s\n", celebrityFN, celebrityLN);
    
    return 0;
}