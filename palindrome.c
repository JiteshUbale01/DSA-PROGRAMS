#include<stdio.h>
void main(){
    int n,rev=0,rem,temp;
    printf("\n enter an number:");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev!=temp)
    {
        printf("\n number is not palindrome");
    }
    else
    {
        printf("\n its a palindrome number");
    }
}