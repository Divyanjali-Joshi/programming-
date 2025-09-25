 #include <stdio.h>
int main()
{
   int n,c=1;
   printf("enter value of n ");
   scanf("%d",&n);

   while(n>=1)
   {
    c=c*n;
    n--;
   
   }
   printf("factorial=%d",c);
    
   
   return 0;
}