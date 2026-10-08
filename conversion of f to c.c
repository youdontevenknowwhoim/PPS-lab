#include<stdio.h>
int main()
{
float c, f;

printf("enter the c temperature:");
scanf("%f",&c);

f = (c*1.8) + 32;
printf("The conversion of farhenheit to celcius is: %f", f);
return 0;
}
