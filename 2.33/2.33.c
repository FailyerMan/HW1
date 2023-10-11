#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tk,pgs,akg,pfp,tp,tc=0;
    printf("Total kilometer driven per day:");
    scanf("%d",&tk);
    printf("Cost per gallon of gas:");
    scanf("%d",&pgs);
    printf("Average kilometer per gallon:");
    scanf("%d",&akg);
    printf("Parking fee per day:");
    scanf("%d",&pfp);
    printf("Tolls per day:");
    scanf("%d",&tp);
    tc=((tk/akg)*pgs)+pfp+tp;
    printf("\nTotal Cost:%d dollars\n\n",tc);
    system("pause");
}