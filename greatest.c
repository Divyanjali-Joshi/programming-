#include <stdio.h>
int main()
{ int a,b,c;
    printf("enter three numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    int p=(a>b && a>c)?a :(b>c && b>a)?b:c;
    printf("largest=%d",p);
    return 0;
}
}