/*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
worked above 40 hours. Assume that employees do not work for 
fractional part of an hour.*/

#include<stdio.h>
int main()
{
int a=1,b,c;
while (a<=10)
  { printf("enter your working hours ");
    scanf("%d",&b);
 if(b>40)
    { c=(b-40)*12;
    printf("over time pyment is %d\n",c);}
a++;
    
}
return 0 ;
}