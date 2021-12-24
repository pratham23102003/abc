/* Write a program to add first seven terms of the following series 
1/1! + 2/2!........
using a for loop:*/
#include<stdio.h>
int main()
{
    int i,b;
float c,sum=0;
    for (i=1;i<=7;i++)
    {  c=1;
        for (b=1;b<=i;b++)
    {
         c=c*b;
    }
        sum=sum+i/c;
    }
    printf("%f",sum);
    return 0;
}