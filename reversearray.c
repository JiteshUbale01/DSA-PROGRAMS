// this is a simple c program to reverse the elements of the given array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n,start,end,temp,i;
    n=sizeof(arr)/sizeof(arr[0]);
    start=0;
    end=n-1;
    printf("\n before reversing array elements are:");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    //the below loop is the main logic of this program
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("\n after reverse array elements are:");
    for(i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
