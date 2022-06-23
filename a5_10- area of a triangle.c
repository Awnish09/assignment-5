#include<stdio.h>
#include<conio.h>
int main()
{
    float b, h, a;
    printf("Enter the base and height of the triangle.\n");
    scanf("%f %f",&b,&h);
    a=b*h/2;
    printf("The area of the triangle is %f",a);
    getch();
}
