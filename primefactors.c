 #include<stdio.h>
 #include<string.h>

int main()
{
	int i, m, count = 0;
        scanf("%d", &m);
	for(i = 2; m > 1; i++){
		while(m % i == 0){
			m = m / i;
			printf("%d ", i);
                        count++ ;
		}
	}

	
        int j = 0, sum = 0;
        int store_fac[count++];
        int store_num[50];
        for( j = 0; j < count; j++ ) {
                if( store_fac[j] == store_fac[j + 1] ) {
                        sum++;
                } else {
                        store_num[j] = i + 48;
                        store_num[j + 1] = store_fac[j];
                        j += 2;        
                        sum = 1;
                }
        }        
        store_num[j] = (count) - 1;
        printf("%d\n", store_num);
        return 0;
}








