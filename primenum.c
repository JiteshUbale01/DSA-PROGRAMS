// c program for checking a number is prime or not 
#include <stdio.h>
int main()
{
    int n,i,f=0;
    printf("\n enter a number:");
    scanf("%d",&n);
    for(i=2;i<n-1;i++){
        if(n%i==0){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("\n not a prime number");
    }
    else{
        printf("\n its a prime number");
    }
    return 0;
}