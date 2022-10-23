#include <stdio.h>
int main()
{
    float a,b,c,average;
printf("Please Input Three Number: \n");
scanf("%f %f %f", &a, &b, &c);
average=(a+b+c)/3;
printf("Average = %0.2f", average);
return 0;
}
