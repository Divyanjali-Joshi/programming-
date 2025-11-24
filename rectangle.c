 #include <stdio.h>
 struct Rectangle{
    int length;
    int breadth;
 };
 struct Rectangle inputRectangle()
 {
    struct Rectangle s2;
    printf("enter value of length and breath");
    scanf("%d",&s2.length);
    scanf("%d",&s2.breadth);
    return s2;
 }
 int area(struct Rectangle s1)
 {
 int a;
 a=(s1.length*s1.breadth);
 return a;
 }
 int main(){
    struct Rectangle s1;
    int a=0;
    s1=inputRectangle();
    a=area(s1);
    printf("area of rectangle=%d",a);
    return 0;
 }