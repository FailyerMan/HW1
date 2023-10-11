#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num;
    printf("Input One integer:");
    scanf("%d",&num);
    
    if (num%2==0)
    {
        printf("It's even.\n");
    }
    else
    {
        printf("It's odd\n");
    }
    system("pause");
}