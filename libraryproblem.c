//From Hackerearth Alice is rearranging her library. She takes the innermost shelf and reverses the order of books. 
// She breaks the walls of the shelf. 
// In the end, there will be only books and no shelf walls. Print the order of books. 
// Opening and closing walls of shelves are shown by '/' and '\' respectively whereas books are represented by lower case alphabets.
// we can solve this problem using stack data structure
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[100];
int i,n,m;
void main(){
    char input[50],temp[50];
    int i;
    printf("\n enter string representing library:");
    gets(input);
    n=strlen(input);
    for(i=0;i<n;i++){
        if(input[i]=='/'||input[i]=='\\'){
            continue;
        }
        else{
            temp[i]=input[i];
        }
    }
    m=strlen(temp);
    for(i=0;i<m;i++){
        printf("%c",temp[i]);
    }
}