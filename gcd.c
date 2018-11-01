#include<stdio.h>

int GCD(a, b)
{
        if(a == 0){
                return b;
        }
        while(b != 0){
                if(a > b){
                        a = a - b;
                }else{
                        b = b - a;
                }
        }
        return a;
}
void main()
{
        int x, y;
        scanf("%d %d", &x, &y);
        printf("gcd of %d and %d is %d",x, y, GCD);
}