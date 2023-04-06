#include <stdio.h>

int main()
{
    int n,fact,i,sum=0;
    printf("\n enter a number:");
    scanf("%d",&n);
    for(i=1;i<n-1;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum!=n){
        printf("\n not a perfect number!!!");
    }
    else{
        printf("\n Yes it is a perfect number!!!");
    }
    return 0;
}