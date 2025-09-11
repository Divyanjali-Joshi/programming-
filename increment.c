 #include <stdio.h>
 int main()
 {
    int i,t1,t2,m;
    printf("enter a number ");
    scanf("%d",&i);
     m =i;
    t1=++i;
     t2= m++;
    printf("%d",t1);
    printf("%d",t2);
    return 0;
 }