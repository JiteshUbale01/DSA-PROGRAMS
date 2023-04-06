//c program for generating fibonacci series
#include <stdio.h>
int main(){
    int n,i,f1=0,f2=1,f;
    printf("\n enter a number:");
    scanf("%d",&n);
    printf(" %d %d",f1,f2);
    for ( i = 2; i < n; i++)
    {
        f=f1+f2;
        printf(" %d",f);   
        f1=f2;
        f2=f;
    }
   return 0; 
}