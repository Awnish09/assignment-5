#include<stdio.h>
#include<conio.h>
int main()
{
    float cp, sp, p;
    printf("Enter cost price and selling price of the product.\n");
    scanf("%f %f",&cp,&sp);
    p=sp-cp;
    printf("The profit%% of the product is %f",p/cp*100);
    getch();
}
