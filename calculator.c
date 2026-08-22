#include<stdio.h>
int main()
{
    int add,sub,multi,divi,a,b;
    char operator;
    printf("enter operator");
    scanf("%c",&operator);
    printf("enter a and b");
    scanf("%d%d",&a,&b);
    switch(operator)
    {
        case'+':
        add=a+b;
        printf("%d",add);
        break;
        case'*':
        multi=a*b;
        printf("%d",multi);
        break;
        case'-':
        sub=a-b;
        printf("%d",sub);
        break;
        case'/':
        divi=a/b;
        printf("%d",divi);
        break;
        default:printf("invalid operator");
    }
    return 0;
}