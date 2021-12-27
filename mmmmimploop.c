/*Write a program to produce the following output
         1
       2   3
     4   5    6
  7    8    9    10 */
   #include<stdio.h>
   int main()
   { int i,j,k=1,l;
       for( i=1; i<=4; i++)
       {                         // dekh bhai print jo karva na tha uska loop jaruri nahi tha vo to bas badta ja 
        for ( j = 1;j<=4;j++)    // raha he vo to k++ se ho jayega but aek baar k print kiya fir 2nd time,  fir
        { if(5-j>i)              //3rd time karne  de uske liye loop jaruri tha samja
             printf(" ");}
         for (l=1;l<=4;l++)
           {  
             if(l<=i)
             printf("%d ",k++);
           }
        printf("\n");}
      return 0;}
           
   