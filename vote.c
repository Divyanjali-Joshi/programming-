  #include <stdio.h>
  
int main()
{
    int age=0;
    
    printf("enter age  \n");
    scanf("%d",&age);

    if(age >=18)
    {
        printf("eligible to vote \n");
        
    }else if(age <18)
    {
        printf("check again \n");
    }else if (age==0 )
    {
        printf("invalid \n ");
    }else{
        printf("not eligible to vote \n ");
    }
    return 0;
}