#include <stdio.h>

int main()
{
    int res=0,count[10],rent_cost[10],purchase_cost[10],n,i;
    printf("\n enter number of test cases:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&rent_cost[i],&purchase_cost[i]);
    }
    i=0;
    while(i<n){
        res+=rent_cost[i];
        while(res<purchase_cost[i]){
            count[i]+=1;
            res+=rent_cost[i];
        }
        printf("\n %d",count[i]);
        i++;
    }
    return 0;
}