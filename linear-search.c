#include<stdio.h>
void main()
{
        int i, n, search, count = 0;
        scanf("%d", &n);
        int arr[n];
        printf("enter the elements to the array:");
        for(i = 0; i < n; i++){
                scanf("%d", &arr[i]);
        }
        printf("enter the element to be searched:");
        scanf("%d", &search);
        for(i = 0; i < n; i++){
                if(arr[i] == search){
                printf("%d is present at location %d", search, count + 1);
                break;
        }else{
                printf("NOT FOUND");
        }
        }

}