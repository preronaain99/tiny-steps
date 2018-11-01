 #include<stdio.h>
 #include<string.h>

int main()
{
	int m, count = 0, j = 0;
        int  p;
        char a[50];
        scanf("%d", &m);
	for(p = 2; m > 1; p++){
		while(m % p == 0){
			m = m / p;
                        p = p + 48;
                        count++;
                        a[count++] =  p;
		}
	}
        int i;
        int sum = 0, ch = 0;
        char store_fac[p];
        int len = strlen(store_fac);
        char store_char[50];
        for( i = 0; i < len; i++ ) {
                if( store_fac[i] == store_fac[i + 1] ) {
                        sum++;
                } else {
                        store_char[i] = sum + 48;
                        store_char[i + 1] = store_fac[i];
                        i += 2;        
                        sum = 1;
                }
        }        
        store_char[ch] = '\0';
        printf("%s\n", store_char);
        return 0;
}








