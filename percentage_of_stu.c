#include<stdio.h>
#include<conio.h>
int main()
{
    float eng,nep,math,physics,chem,bio,computer,total,percentage;
    printf("Enter the markes of all subjects.");
    printf("\nEnter the mark of English\t");
    scanf("%f",&eng);
    printf("\nEnter the mark of Computer\t");
    scanf("%f",&computer);
    printf("\nEnter the mark of Nepali\t");
    scanf("%f",&nep);
    printf("\nEnter the mark of Math\t");
    scanf("%f",&math);
    printf("\nEnter the mark of Physics\t");
    scanf("%f",&physics);
    printf("\nEnter the mark of Chemistry\t");
    scanf("%f",&chem);
    printf("\nEnter the mark of Biology\t");
    scanf("%f",&bio);
    total=eng+nep+math+physics+chem+bio+computer;
    percentage=total/7;
    if(percentage>=80)
    
    
        printf("\nDistinction");

        else if(percentage<=79 && percentage>=60)
        printf("\nFirst Division.");

        else if(percentage<=59 && percentage>=45)
        printf("\nSecond Division.");

        else if(percentage<=44 && percentage>=32)
        printf("\nThird Division.");
    

        else if(percentage<=31)
        printf("\nFail");

        printf("\nyour percentage is %f",percentage);

        return 0;





    
}