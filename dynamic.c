#include<stdio.h>
int convert(int d)
{
        if(d == 0)
        return 0;
        else
        return(d % 2 + 10 * convert(d / 2)); 
}
int main()
{
        int n;
        printf("Enter a number:\n");
        scanf("%d", &n);
        printf("The binary form of the entered number is :\n");
        printf("%d", convert(n));
        return 0;
}