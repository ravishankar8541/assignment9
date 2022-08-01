/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include"stdio.h"
int main()
{
    char ch;
    int a,b;
    printf("\na. Addition");
    printf("\nb. Subtraction");
    printf("\nc. Multiplication");
    printf("\nd. Division");
    printf("\ne.exit");
    printf("\nEnter your choice : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        printf("Enter two number ");
        scanf("%d %d",&a,&b);
        printf("sum of %d and %d is %d",a,b,a+b);
        break;
        case 'b':
        printf("Enter two number ");
        scanf("%d %d",&a,&b);
        printf("Subtraction of %d and %d is %d",a,b,a-b);
        break;
        case 'c':
        printf("Enter two number ");
        scanf("%d %d",&a,&b);
        printf("Multiplication of %d and %d is %d",a,b,a*b);
        break;
        case 'd':
        printf("Enter two number ");
        scanf("%d %d",&a,&b);
        printf("Division of %d and %d is %d ",a,b,a/b);
        break;
        case 'e':
        if(ch=='e')
        break;

    }
    return 0;
}