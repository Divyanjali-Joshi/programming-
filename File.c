  #include <stdio.h>
  #include <string.h>

 int main()
 {
    FILE *ptr;
    char ch [50];
    char ch2[6];
    char ch3[]="END";
    char ch4[]="NO";
    char ch5[10];
    printf("enter name of fil to create\n");
    scanf("%s",ch5);
    ptr=fopen(ch5,"w");

    while (1){
        printf("enter string that you want to write\n");
        scanf("  %[^\n]", ch);
      
    fprintf(ptr, "%s\n", ch);

        printf("Do you want to continu or end?\n");
        printf("If end write END else write NO\n");
        scanf(" %s",ch2);
        if(strcmp(ch2,ch3)==0){
            break;
        }else if(strcmp(ch2,ch4)==0)
         {
            continue;
         }
    }
    fclose(ptr);
    printf("writing done successfully\n");
    return 0;

 }