#include<stdio.h>
#include<conio.h>
#define Pi 3.14
int main()
{
    float major,minor,area;
    printf("put the value of major and minor axis.\n");
    scanf("%f %f",&major,&minor);
    area=Pi*major*minor;
    printf("The area of ellipse is %.2f",area);
    return 0;

}