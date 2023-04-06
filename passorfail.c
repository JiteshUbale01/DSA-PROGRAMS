//In this problem we have to determine whether the chef has passed the exam or not 
//we have total no of questions(n), no of correct questions(x), minimum passing marks(p)
//for each correct question 3 marks are awarded and -1 for each incorrect question
//now based on the input we need to tell whether the chef has passed the exam or not
#include <stdio.h>

int main()
{
    int n,x,p,i,marks=0;
    printf("\n enter total no of questions:");
    scanf("%d",&n);
    printf("\n enter no of correct questions:");
    scanf("%d",&x);
    printf("\n enter minimum passing marks:");
    scanf("%d",&p);
    for(i=0;i<x;i++){
        marks+=3;
    }
    marks=marks-(n-x);
    if(marks>=p){
        printf("\n pass");
    }
    else{
        printf("\n fail");
    }
    return 0;
}
