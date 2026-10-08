#include<stdio.h>
int main()
{
float p, t, r, simple_interest;
printf("Enter the value of P:");
scanf("%f",&p);

printf("Enter the value of t:");
scanf("%f",&t);

printf("Enter the value of r:");
scanf("%f",&r);

simple_interest = (p*t*r)/100;

printf("The value of simple interest is:%f", simple_interest);
return 0;
}
