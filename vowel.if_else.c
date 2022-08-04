#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter letter:");
    scanf("%s",&ch);
    if(ch=='a')
    printf("vowel is a.");

    else if(ch=='e')
    printf("vowel is e.");

    else if(ch=='i')
    printf("vowel is i.");

    else if(ch=='o')
    printf('vowel is o.');

    else if(ch=='u')
    printf("vowel is u.");

    else
    printf("letter is non-vowel");
    return 0;


}