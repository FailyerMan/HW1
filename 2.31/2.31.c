#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("number\tsquare\tcube\n");
    for (int a=0;a<11;a++)
    {
        printf("%d\t%d\t%d\n",a,a*a,a*a*a);
    }
    system("pause");
}