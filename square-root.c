#include<stdio.h>
#include<math.h>

float square_root(float m)
{
        float x1, x0;
        x1 = m;
        if(m < 0)
        {
                m = -m;
                return m;
        }
        else if(m > 0)
        {
                do {
                        x0 = x1;
                        x1 = (0.5) * (x0 + ( m / x0));                  
                }
                while(fabsf(x0 - x1) > 0.001f);
        }
        return x1;
}

int main()
{
	int i;
        float m, arr[50];
	scanf("%f", &m);
	for(i = 0; i < m; i++){
		scanf("%f", &arr[i]);
	}
	for(i = 0; i < m; i++){
		printf("%f ", square_root(arr[i]));
	}
        return 0;
}
	







