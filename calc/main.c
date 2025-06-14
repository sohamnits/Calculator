#include <stdio.h>
int main()
{
char ch;
double a,b;
printf("enter A to add two numbers:\n");
printf("enter S to subtract two numbers:\n");
printf("enter M to Multiply two numbers:\n");
printf("enter D to divide two numbers:\n");
scanf("%c",&ch);
printf("enter first number:\n");
scanf("%lf",&a);
printf("enter second number:\n");
scanf("%lf",&b);
switch(ch)
{
    case 'A':
    printf("answer is %lf",(a+b));
    break;
     case 'S':
    printf("answer is %lf",(a-b));
    break;
     case 'M':
    printf("answer is %lf",(a*b));
    break;
     case 'D':
     if(b!=0)
    printf("answer is %lf",((double)a/b));
     else 
     printf("cannot divide by zero");
    break;
    default:
    printf("wrong choice");
}}

    
    






