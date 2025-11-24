 #include <stdio.h>
 #include <String.h>
 union Data{
    int i;
    float f;
    char str[20];
 };
 int main(){
    union Data d;
    printf("enter value of i");
    scanf("%d",&d.i);
    printf("value of i=%d",d.i);
     printf("enter value of f");
    scanf("%f",&d.f);
    printf("value of f=%f",d.f);
     printf("enter value of string");
    scanf("%s",&d.str);
    printf("value of str=%s",d.str);
    return 0;
 }

    