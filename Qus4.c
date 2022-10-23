#include <stdio.h>
int main()
{
    double celsius,Fahrenheit;
printf("Please Input Celsius Temperature\n");
scanf("%0.3lf", &celsius);
Fahrenheit=(celsius*(9/5))+32;
printf("Fahrenheit Temperature is = %0.3lf\n", Fahrenheit);
printf("\n");
return 0;
}
