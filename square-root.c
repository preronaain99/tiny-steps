#include<stdio.h>

float square_root(float m)
{
        int i;
        float x1, x0;
        x0 = m;

        if(m < 0)
        {
                m = -m;
                return m;
        }
        else if(m > 0)
        {
                i = 0;
                do{
                        x1 = (0.5) * (x0 + ( m / x0));                  
                        printf("%f", x1);
                        i++;
                }
                while(x1 != x0);
                
                

        }
        if(x0 == x1)
        {
                return x0;
        }
       
}

void main()
{
	int i;
        float m, arr[50];
	scanf("%f", &m);
	for(i = 0; i < m; i++){
		scanf("%f", &arr[i]);
	}



	for(i = 0; i < m; i++){
		square_root(arr[i]);
		printf("\n");
	}
}
	







