#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int num[3],large=0,small=0;
    printf("Input three integers:");
    scanf("%d %d %d",&num[0],&num[1],&num[2]);
    large=num[0];
    small=num[0];
    for (int d=0;d<3;d++)
    {
        if (num[d]>large)
        {
            large=num[d];
        }
        if (num[d]<small)
        {
            small=num[d];   
        }
    }
    printf("Largest Num:%d\nSmallest Num:%d\n",large,small);
    system("pause");
}