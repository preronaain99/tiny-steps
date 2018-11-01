#include<stdio.h>

float add(float x, float y)
{
       printf("the addition is :%.2f", x + y);
        return 0.0;
}
float mul(float x, float y)
{
        printf("the multiplication is :%.2f", x * y);
        return 0.0;
}
float sub(float x, float y)
{
        printf("the subtraction is :%.2f", x - y);
        return 0.0;
}
float div(float x, float y)
{
        printf("the division is :%.2f", x / y);
        return 0.0;
}
void main()
{
        float a, b;
        scanf("%f %f", &a, &b);
        add(a,b);
        printf("\n");
        mul(a,b);
        printf("\n");
        sub(a,b);
        printf("\n");
        div(a,b);
        
}
