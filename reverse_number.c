//C program to do reverse of a number
#include <stdio.h>
int main()
{
    int n,rem,rev=0;
    printf("\n enter a number:");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\n reverse number is:%d",rev);
    return 0;
}