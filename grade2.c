  #include <stdio.h>
int main()
{
    int num;
    printf("enter number \n");
    scanf("%d",&num);
    if(num>=90 && num<=100)
    {
        printf("grade A \n");
    }else if(num>=75 && num<=89)
    {
        printf(" grade B \n");
    }else if(num >=50 && num<=74 )
    {
        printf(" grade C \n");
    
    
    }else{
        printf("grade F ");
    }
    return 0;
}