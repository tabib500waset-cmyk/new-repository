#include<stdio.h>
int main()
{
    int grade;
    printf("enter your grade");
    scanf("%d",&grade);
    if(grade>80)
    {
        printf("grade A+");
    }
    else if(grade>70)
    {
        printf("grade A");
    }
    else if(grade>60)
    {
        printf("grade B");
    }
    else if(grade>50)
    {
        printf("grade c");
    }
    else if(grade>40)
    {
        printf("grade D");
    }
    else
    {
        printf("grade F");
    }
    return 0;
}