#include<stdio.h>
#include<conio.h>
int main()
{
    char string[100];
    printf("Enter some text:");
    scanf("%[^q]s",&string);
    printf("Your text is %s ",string);
    return 0;
}
