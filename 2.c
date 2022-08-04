#include<stdio.h>
#include<conio.h>
int main()
{
    char name[10];
    float phy,math,che,nepali,english,total,percentage;
    printf("Enter the name of student:");
    scanf("%s",&name);
    printf("enter the marks obtained in  all subjests :");
    scanf("%f%f%f%f%f",&phy,&math,&che,&nepali,&english);
    total=phy+math+che+nepali+english;
    percentage=total/5;
    printf("The total percentage obtained by  %s is : %f " ,name,percentage );
    getch();
    return 0;
}