//this is a program for finding unique elements in the array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[20],n,i,j;
    printf("\n enter size of array:");
    scanf("%d",&n);
    printf("\n enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                break;
            }
        }
        if(j==n){
            printf("\n unique elements: %d",arr[i]);
        }
    }
    return 0;
}