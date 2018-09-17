 #include<stdio.h>
 #include<string.h>

int main()
{
	int i, m, p, count = 0;
        scanf("%d", &m);
	for(i = 2; m > 1; i++){
		while(m % i == 0){
			m = m / i;
			printf("%d ", i);
                        count++;
                        p = i;
                        int storefac[count++] = p + 48;
		}
	}

	
        int j = 0, sum = 1, ch = 0;
        char store_char[50];
        /*I CANNOT UNDERSTAND HOW TO PROCEED AFTER THIS*/
        for( j = 0; j < len; i++ ) {
                if( storefac[j] == storefac[j + 1] ) {
                        sum++;
                } else {
                        store_char[ch] = sum + 48;
                        store_char[ch + 1] = storefac[j];
                        ch += 2;        
                        sum = 1;
                }
        }        
        store_char[ch] = '\0';
        printf("%s\n", store_char);
        return 0;
}








