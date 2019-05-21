#include<stdio.h>

int main()
{
        int n, l, r, p, t, a[50];
        float k;
        scanf("%d", &n);
        printf("enter the elements to the array:\n");
        for(int i = 0; i < n; i++){
                scanf("%d", &a[i]);
        }
        printf("enter the element to be searched:\n");
        scanf("%d", &t);
        printf("enter the value of k:");
        scanf("%f", &k);
        l = 0;
        r = n - 1;
       
        while(l <= r && (k > 0 && k < 1)){
                p = (int) (l + r) * k;
                if(a[p] < t)
                l = p + 1;
                if(a[p] == t){
                        printf("%d found at location %d.\n", t, p + 1);
                        break;
                }
                else
                r = p - 1;
                
        }
        if(l > r)
        return 0;
}             

