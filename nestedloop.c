/*Write a program to print all prime numbers from 1 to 300. */
#include<stdio.h>
int main()
{int i,n,b;
    for(n=1;n<=300;n++)
{ int c=1;
    for (i=2;i<n;i++)
{
    b=n%i;
    if(b==0)
  {  c=0;
    break;}
}
if(c)
printf("%d\n",n);
}

return 0;}