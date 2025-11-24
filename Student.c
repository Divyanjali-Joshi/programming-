 #include <stdio.h>
 struct Student{
    char name[20];
    int sapid;
    float marks;
 };
 int main()
 {
    struct Student a[5];
    for(int i=0;i<5;i++)
    {
    printf("enter 5 students name ,sapid,marks \n");
    scanf("%s",&a[i].name);
    scanf("%d",&a[i].sapid);
    scanf("%f",&a[i].marks);
 }
  for(int i=0;i<5;i++)
    {
    
    printf("%s   ",a[i].name);
    printf("%d   ",a[i].sapid);
    printf("%f   ",a[i].marks);
    printf("\n");
 }
 return 0;
}

 