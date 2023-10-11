#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float h,w,bmi;
    printf("Input your Height(m):");
    scanf("%f",&h);
    printf("Input your Weight(kg):");
    scanf("%f",&w);
    bmi=w/(h*h);
    if (bmi<18.5)
    {
        printf("Your BMI is %.1f\nYou are Underweight\n",bmi);
    }
    else if (bmi>=18.5&&bmi<=24.9)
    {
        printf("Your BMI is %.1f\nYou are Normal\n",bmi);
    }
    else if (bmi>=25&&bmi<=29.9)
    {
        printf("Your BMI is %.1f\nYou are Overweight\n",bmi);
    }
    else
    {
        printf("Your BMI is %.1f\nYou are Obese\n",bmi);
    }
    system("pause");
}