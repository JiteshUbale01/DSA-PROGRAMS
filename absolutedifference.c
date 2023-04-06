#include<stdio.h>
#include<stdlib.h>
void main(){
    int a[10],n,sum=0,i,pos,diff;
    printf("\n enter size of the array:");
    scanf("%d",&n);
    printf("\n enter array elements:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter position:");
    scanf("%d",&pos);
    for ( i = pos-1; i < n-1; i++)
    {
        diff=abs(a[i]-a[i+1]);
        sum=sum+diff;
    }
    printf("desired result is:%d",sum);
}