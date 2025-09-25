  #include <stdio.h>
int main()
{
   int n,c=0;
   printf("enter value of n ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
    if(n%i==0)
{
    c++;
}
    
   }
   if(c==2)
   {
    printf("prime ");
   }else{
    printf("not prime ");
   }
   return 0;
}