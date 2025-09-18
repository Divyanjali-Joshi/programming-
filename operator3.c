 #include <stdio.h>
  
int main()
{
    int a=0,b=0,c=0,d=0;
    char ch,ch1;
     //43    45    47    42
    
    printf("enter two numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("enter an operator from the following \n");
    printf(" 1= + \n");
    printf("2= - \n");
    printf("3= / \n");
    printf(" 4= * \n");

    scanf("%c",&ch1);
    scanf("%c",&ch);
    d=ch;
 switch(ch)
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



return 0;
}