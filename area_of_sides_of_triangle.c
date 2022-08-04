#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,s,area;  /*where a,b,c are sides of triangle and s is perimeter of triangle */
    printf("Enter the sides of triangle:");
    scanf("%d\t%d\t%d",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\nArea of triangle is:%d",area);
    return 0;


}