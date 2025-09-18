 #include <stdio.h>
  
int main()
{
    int a=0;
    
    printf("enter a number for week \n");
    scanf("%d",&a);
    switch(a)
{
    case 1:
    printf("SUNDAY \n");
    break;
    case 2:
    printf("MONDAY \n");
    break;
    case 3:
    printf("TUESDAY \n");
    break;
    case 4:
    printf("WEDNESDAY \n");
    break;
    case 5:
    printf("THRUSDAY \n");
    break;
    case 6:
    printf("FRIDAY \n");
    break;
    case 7:
    printf("SATURDAY \n");
    break;
    default:
    printf("invalid");
    return 0;

}

    
}