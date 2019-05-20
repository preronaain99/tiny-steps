#include<stdio.h>
#include<string.h>
void encryptDecrypt(char inpString[])
{
        char xorKey = 'P';
        int len = strlen(inpString);
        int i;
        for(i = 0; i < len; i++){
                inpString[i] = inpString[i] ^ xorKey;
                printf("%c", inpString[i]);
        }
}
void main()
{
        char sampleString[] = "AdritaAinDutta";
        printf("Encrypted string: ");
        encryptDecrypt(sampleString);
        printf("\n");
        printf("Decrypted string: ");
        encryptDecrypt(sampleString);



}