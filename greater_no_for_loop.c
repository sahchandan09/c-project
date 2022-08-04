#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3;
    printf("Emter three numbers:");
    scanf("%d\t%d\t%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        printf("\n%d is greater.",num1);
    
    else
    printf("\n%d is greater.",num2);
    }
    
else
   {
       if(num2>num3)
    printf("\n%d is greater",num2);
    else
    printf("\n%d is greater.",num3);
   
    return 0;
    }
}

