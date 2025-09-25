 #include <stdio.h>
void main()
{
   int a,b,flag=1,c=0;
   char ch1,ch2;
   

   do{
    
   printf("enter value of two numbers \n ");
   scanf("%d",&a);
   scanf("%d",&b);
   printf("enter operation of +,-,/,* \n");
   scanf("%c",&ch2);

   scanf("%c",&ch1);
   switch (ch1)
   {
    case '+':
    c=a+b;
    printf("SUM=%d ",c);
    break;
    case '-':
    c=a-b;
     printf("SUB=%d ",c);
    break;
    case '/':
    if(b!=0)
    {
    c=a/b;
     printf("DIV=%d ",c);
    }else{
        printf("DIVISION NOT POSSIBLE");
    }
    break;
    case '*':
    c=a*b;
     printf("MUL=%d ",c);
    break;
    default:
    printf("invalid");
        }
        printf("do you want to continue?\n enter 1 for yes and 0 for no");
        scanf("%d",&c);
        if(c==0)
        {
            flag=0;
        }
    }
        while(flag==1);
    
} 
   

   
   
    
   
   