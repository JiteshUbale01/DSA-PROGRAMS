//You are provided an array A of size N  that contains non-negative integers. Your task is to determine whether the number that is formed by selecting the last digit of all the N numbers is divisible by 10  PS:hackerearth level:easy
#include <stdio.h>
#include <stdlib.h>
void main(){
    int a[10],i,n,rem,number=0,check;
    printf("\n enter size of the array:");
    scanf("%d",&n);
    printf("\n enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        rem=a[i]%10;
        number=number*10+rem;
    }
    check=number%10;
    if (check==0)
    {
        printf("\n Yes");
    }
    else
    {
        printf("\n No ");
    }
    
}