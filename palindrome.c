#include<stdio.h>

int palindrome(int n)
{
        int rev = 0, digit, temp;
        temp = n;
        do{
                digit = n % 10;
                rev = (rev*10) + digit;
                n = n / 10;
        }
        while(n != 0);
        if(temp == rev){
                printf("palindrome");
        }else{
                printf("not a palindrome");
        }
        return 0;
}
void main()
{
        int n;
        scanf("%d", &n);
        palindrome(n);
}