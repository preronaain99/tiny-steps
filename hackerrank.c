#include<stdio.h>
int main()
{
        int n, i, ht, count = 1;
        scanf("%d", &n);
        int height[n];
        ht = height[0];
        for(i = 1; i < n; i++){
                scanf("%d", &height[i]);
                if(ht < height[i]){
                        ht = height[i];
                        count = 1;
                }
                if(ht == height[i]){
                        count++;
                }
             
         }
        printf("%d", count);
        return 0;
}

                        