#include<stdio.h>
#include<string.h>
void main()
{
    char str[10]={'a','a','a','a','b','b','c','d','d','\0'};
    int i=0,sum=1;
    char a[50];
    int len=strlen(str);
    while(str[i]!='\0')
    for(i=0;i<len-1;i++)
    {
         if(str[i]==str[i+1]){
           sum++;
       
          
              printf("%c",str[i]);
            
           
          }else{
            
           for(i=sum+48;i<=a[i];i++)
            
             printf("%c%d",str[i],a[i]);   
              }      
            
     }


            

         
}  
             



   
