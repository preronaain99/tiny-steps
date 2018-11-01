#include<stdio.h>
void main()
{
        int i, n, arr[100], large, small;
        scanf("%d", &n);
        printf("enter the elements to the array:");
        for(i = 0; i < n; i++){
                scanf("%d", &arr[i]);
        }
        large == arr[0];
        small == arr[0];
        for(i = 0; i < n; i++){
                if(arr[i] > large)
                large = arr[i];
        }
        for(i = 0; i < n; i++){
                if(arr[i] < small)
                small = arr[i];
        }
        printf("the smallest number is %d:", small);
        printf("the largest number is %d:", large);
}