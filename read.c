 #include <stdio.h>
 int main()
 {
    FILE *ptr;
    char ch [20];
    char ch2[10];
     printf("enter name of file to visit\n");
      scanf("%s",ch2);
    ptr=fopen(ch2,"r");
    while(fscanf(ptr,"%s",ch)==1)
    {
       printf("%s\n",ch);
    }
    fclose(ptr);
    return 0;
 }