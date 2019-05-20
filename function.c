#include<stdio.h>
#include<string.h>
void upper_string(char s[])
{
        int i = 0;
        while(s[i] != '\0'){
                if(s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] - 32;
        }
        i++;
}
void main()
{
        char x[100];
        printf("Enter a string :\n");
        scanf("%s", x);
        upper_string(x);
        printf("The letters in upper case :%s\n", x);
}
        

