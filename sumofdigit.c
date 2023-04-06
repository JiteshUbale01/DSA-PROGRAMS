#include <stdio.h>
void main(){
    int n,sum=0,rem;
    printf("\n enter a number:");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        sum+=rem;
        n=n/10;
    }
    printf("\n sum of digits is:%d",sum);
}