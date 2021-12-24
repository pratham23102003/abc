#include <stdio.h>

int main()
{
  for(int i=1;i<=3;i++)
  {
    for(int j=1;j<=3;j++)
    {
      for(int k=1;k<=3;k++)
      {
        if(i!=j && i!=k && j!=k && j!=i)
        printf("%d %d %d\n",i,j,k);
      }
    }
  }
    return 0;}

    #include<stdio.h>
int main ()
{
    int i,b,c;
    for(i=1;i<=3;i++)
    {
        for (b=1;b<=3;b++)
        
        {   if(b!=i)
            for(c=1; c<=3;c++)
            {  if( c!=b && c!=i)
            {
                printf("hello");
        printf("%d %d %d\n",i,b,c);
            }
            }
        }
    }
    }
    return 0;
}