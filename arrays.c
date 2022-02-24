#include <stdio.h>
#include <stdlib.h>

  int main()
{
    int luckynumber[] = {4, 5, 22, 34, 62, 37, 463};
    luckynumber[0] = 200;
    printf("%d", luckynumber[0]);
    return 0;
}