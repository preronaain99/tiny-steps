#include<stdio.h>

int main()
{
        int n, l, r, m, t, a[50];
        scanf("%d", &n);
        printf("enter the elements to the array:\n");
        for(int i = 0; i < n; i++){
                scanf("%d", &a[i]);
        }
        printf("enter the element to be searched:\n");
        scanf("%d", &t);
        l = 0;
        r = n - 1;
        m = (l + r) / 2;
        while(l <= r){
                if(a[m] < t)
                l = m + 1;
                else if(a[m] ==t){
                        printf("%d found at location %d.\n", t, m + 1);
                        break;
                }
                else
                r = m - 1;
                m = (l + r) / 2;
                
        }
        if(l > r)
        return 0;
}