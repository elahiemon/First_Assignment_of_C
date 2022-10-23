#include <stdio.h>
int main()
{
    double radius,area;
printf("Please Input Radius\n");
scanf("%lf", &radius);
area=4*3.14159*pow(radius,2);
printf("Area= %0.2lf\n", area);
printf("\n");
return 0;
}
