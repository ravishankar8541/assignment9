/*
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include"stdio.h"
#include"stdlib.h"
int main()
{
  int a,b,c,ch;

    printf("----------------------------------\n\n");
    printf("1. To Check Isosceles Triangle\n");
    printf("2. Right angle Triangle\n");
    printf("3. Right angle Triangle\n");
    printf("4. Exit\n");
    printf("\n----------------------------------");
    printf("\n\nEnter your Choice :");
    scanf("%d",&ch);
  switch(ch){
    case 1:
     printf("\nEnter three lengths of sides of Triangle ");
  scanf("%d %d% d ",&a,&b,&c);
    if(a==b || b==c || c==a)
    {
        printf("It is Isosceles Triangle");
        break;
    }else{
        printf("It is not Isosceles Triangle");
    break;
    }
    case 2:
     printf("\nEnter three lengths of sides of Triangle ");
  scanf("%d %d %d",&a,&b,&c);
    if( a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
    {
  printf("It is a Right angle Triangle");
    break;
    }else{
        printf("It is not Right angle Triangle");
    break;
    }
  case 3:
   printf("\nEnter three lengths of sides of Triangle ");
  scanf("%d %d %d",&a,&b,&c);
  if(a==b && b==c){
  printf("Right angle Triangle");
  break;
  }
  else{
  printf("Not Right angle Triangle");
  break;
  }
  case 4:
  exit(0);
  break;
  default:
  printf("Invalid");
  }

  return 0;
}