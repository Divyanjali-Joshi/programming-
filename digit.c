 #include <stdio.h>
int main()
{
   int n,c=0;
   printf("enter value of n ");
   scanf("%d",&n);

   while(n!=0)
   {
    int d=n%10;
    c++;
   n=n/10;
   }
   printf("digits=%d",c);
    
   
   return 0;
}