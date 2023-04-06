// c program for factorial using recursion
#include <stdio.h>
int fact(int);
int main()
{
    int n,res;
    printf("\n enter an number");
    scanf("%d",&n);
    res=fact(n);
    printf("%d",res);
    return 0;
}
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}