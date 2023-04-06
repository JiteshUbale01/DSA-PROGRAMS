//In this problem there will be a input string we have to replace all upper case letters with lower case letters and vice versa logic is conversion of characters depending on ascii values
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main(){
    char S[50];
    int i,n;
    printf("\n enter the string:");
    gets(S);
    n=strlen(S);
    for ( i = 0; i < n; i++)
    {
        if(S[i]>='A'&&S[i]<='Z'){
            S[i]+=32;
        }
        else if(S[i]>='a'&&S[i]<='z'){
            S[i]-=32;
        }
    }
    puts(S);
}