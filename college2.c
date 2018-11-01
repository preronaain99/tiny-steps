#include<stdio.h>

float cube(float a)
{
        float v;
        v = a*a*a;
        printf("the volume of cube is :%.2f", v);
        return 0.0;
}
float cuboid(float x, float y, float z)
{
        float v;
        v = x*y*z;
        printf("the volume of cuboid is :%.2f", v);
        return 0.0;
}
void main()
{
        float a, l, b, h;
        printf("enter the edge of the cube :");
        scanf("%f", &a);
        printf("enter the length, breadth and height :");
        scanf("%f%f%f", &l, &b, &h);
        cube(a);
        printf("\n");
        cuboid(l, b, h);
}