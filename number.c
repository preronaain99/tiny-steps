#include<stdio.h>
int palindrome(int x);
int main()
{
        int n;
        printf("Enter a number :");
        scanf("%d", &n);
        palindrome(n);
        return 0;

}
int palindrome(int x)
{
        int t, reverse = 0;
        t = x;
        while(t != 0)
        {
                reverse = reverse * 10;
                reverse = reverse + t % 10;
                t = t / 10;

        }
        if(x == reverse)
        printf("PALINDROME NUMBER");
        else
        printf("NOT A PALINDROME NUMBER");
}