#include <stdio.h>
int main()
{
    int n1=0;
    printf("enter a no ");
    scanf("%d",&n1);
    if(n1%2==0)
    {
        printf("even number");
    }else{
        printf("odd number ");
    }
    return 0;
}