#include<stdio.h>

struct complex
{
        float r;
        float im;
};
int main()
{
        struct complex c1, c2, c3;
        printf("Enter the real and imaginary part of the first number:");
        scanf("%f%f", &c1.r, &c1.im);
        printf("Enter the real and imaginary part of the second number:");
        scanf("%f%f", &c2.r, &c2.im);
        c3.r = c1.r + c2.r;
        c3.im = c1.im + c2.im;
        printf("SUM = %.2f + %.2f", c3.r, c3.im);
        return 0;
}