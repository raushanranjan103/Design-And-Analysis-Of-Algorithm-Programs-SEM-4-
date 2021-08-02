//Horspool string matching program
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 256
int table[size];

void shifttable(char P[25])
{
    int i,m;
    m=strlen(P);
    
    for(i=0;i<size;i++)
    table[i]=m; //at starting all elements in table will be initialized to m=size of pattern
    for(i=0;i<m-1;i++)
    table[P[i]]=m-i-1;//for particular characters
}
int horspool(char T[100],char P[25])
{
    int m,n,k,i;
    m=strlen(P);
    n=strlen(T);
    i=m-1;
    while(i<n)
    {
        k=0;
        while((k<m)&&(P[m-1-k]==T[i-k]))
        k=k+1;//k is for no of chaeracters compared
        if(k==m)
          return(i-m+1);
        else
           i=i+table[T[i]];
       
    }
    return -1;
}
void main() 
{
    char text[100],pattern[25];
    int res;
    printf("\n read the text\n");
    scanf("%[^\n]s",text);
    printf("\n read the pattern\n");
    scanf("%s",pattern);
    shifttable(pattern);
    res=horspool(text,pattern);
    if(res==-1)
    printf("\n patter not found \n");
    else
    printf("\n pattern found at pos %d \n ",res);
    
}
