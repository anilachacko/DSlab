#include<stdio.h>
#include<stdlib.h>
void main()
{
   int a,f=0,s=1,fib,b;
   clrscr();
   printf(" Enter the number:");
   scanf("%d", &a);
   for(b=0;b<a;b++)
   {
     if(b<=1)
      {
         fib=b;
      }
    else
      {
        fib=f+s;
        f=s;
        s=fib;
      }
   printf("%d",fib);
   }
return 0;
}
