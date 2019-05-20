#include<stdio.h>
#include<math.h>
void main()
{
        int n, original, remainder, result = 0, digits = 0;
        scanf("%d", &n);
        original == n;
        while(original != 0){
                digits++;
                original = original / 10;
        }
        original == n;
        while(original != 0){
                remainder = original % 10;
                result = result + pow(remainder, digits); 
                original / 10;
        }
        if(n == result)
        printf("ARMSTRONG NUMBER");
        else
        printf("NOT AN ARMSTRONG NUMBER");
}