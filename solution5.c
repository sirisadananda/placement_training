#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   int rem,sum=0;
   printf("Enter the integer: ");
   scanf("%d",&n);
   while(n>0){
    rem=n%10;
    sum=sum*10+rem;
    n=n/10;

   }
   printf("Palindrome is:%d",sum);
}
