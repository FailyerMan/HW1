#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b;

    printf("Input two integers(Num1 Num2):");
    scanf("%d %d",&a,&b);

    if (b%a==0)
    {
        printf("Num1 is multiple of Num2.\n");
    } 
    else
    {
        printf("Num1 isn't multiple of Num2.\n\n");
    }
    system("pause");
}