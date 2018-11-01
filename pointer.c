#include<stdio.h>

void main()
{
        int **p;
        int *q;
        int x = 7;
        q = &x;
        p = &q;
        **p+=3;
        printf("%d",x);
}