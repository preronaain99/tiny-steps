#include<stdio.h>
#include<math.h>
#define MAX 10
int largest(int a [][MAX], int m, int n )
{
        int i, j;
        int large;
        large = a[0][0];
        for(i = 0; i < m; i++){
                for(j = 0; j < n; j++){
                        if(large < a[i][j]){
                        large = a[i][j];
                        }
                        
                }
        }
        return large;
}
int main()
{
        int arr[MAX][MAX], i, j, m, n, l;
        printf("enter the number of rows : ");
        scanf("%d", &m);
        printf("enter the number of columns : ");
        scanf("%d", &n);
        l = largest(arr, m, n);
        printf("Enter the elements to the array :\n");
        for(i = 0; i < m; i++){
                for(j = 0; j < n; j++){
                        scanf("%d", &arr[i][j]);
                }
        }
        printf("largest element : %d", l);
        return 0;

}