#include <stdio.h>  
#include <stdlib.h>  
  
void delay(long int number);  
  
int main()  
{  
    int i,k;  
    i=k=0;  
    while(1)  
    {  
        if(k==0)  
        {  
            for(i=0;i<10;i++)  
                printf("\n");  
            for(i=0;i<20;i++)  
                printf(" ");  
            printf("Please wait");  
        }  
        delay(2000);  
        printf(".");  
        delay(2000);  
        k++;  
        if(k==24)  
        {  
            k=0;  
            system("clear");  
        }  
    }  
    return 0;  
}  
void delay(long int number)  
{  
    long int i=0,j=0;  
    for(i=0;i<number;i++)  
        for(j=0;j<number;j++)  
            ;  
} 
