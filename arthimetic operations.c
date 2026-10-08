#include<stdio.h>
int main()
{
int a, b;
printf("Enter the integers: ");
scanf("%d %d", &a, &b);
printf("Addition: %d + %d = %d\n", a, b, a+b);
printf("Subtraction: %d - %d = %d\n", a, b, a-b);
printf("Multiplication: %d * %d = %d\n", a, b, a*b);
printf("Division: %d / %d = %d\n", a, b, a/b);
printf("Remainder: %d %% %d = %d\n", a, b, a%b);
return 0;
}
