#include<stdio.h>
int main() 
{
int a, b;
printf("Enter the integers: ");
scanf("%d %d", &a, &b);
printf("Greater than: %d > %d = %d\n ", a, b, a>b);
printf("Lesser than: %d < %d = %d\n", a, b, a<b);
printf("Greater than or equal to: %d >= %d =%d\n", a, b, a>=b);
printf("Less than or equal to: %d <= %d = %d\n", a, b, a<=b);
printf("Equal to: %d == %d = %d\n", a, b, a==b);
printf("Not equal to: %d != %d = %d\n", a, b, a!=b);
return 0;
}
