#include<stdio.h>
long int multiplynumbers(int n)

int main()
{
        int n;
        scanf("%d", &n);
        printf("factorial of %d is %ld", n, multiplynumbers(n));
        return 0;
}
long int multiplynumbers(int n)
{
        if(n > 1){
        return n * multiplynumbers(n - 1);
        }
        else{
        return 1;
        }
}