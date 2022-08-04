#include<stdio.h>
#include<conio.h>
int main()
{
    char name[10];
    float math,physics,english,chemistry,cpp,total,percentage;
    printf("Enter the name of student:");
    scanf("%s",&name);
    printf("Enter the marks of all subject.");
    printf("\nphysics:");
    scanf("%f",&physics);
    printf("\nMath:");
    scanf("%f",&math);
    printf("\nEnglish:");
    scanf("%f",&english);
    printf("\nChemistry:");
    scanf("%f",&chemistry);
    printf("\nCpp:");
    scanf("%f",&cpp);
    total=(math+physics+english+chemistry+cpp);
    percentage=total/5;
    printf("\nThe percentage obtained by %s is:%.2f",name,percentage);
    return 0;

}