#include <stdio.h>
int main()
{
    int x,y,z,result;
printf("Please Input Three Number\n");
scanf("%d %d %d", &x, &y, &z);
result=pow(x,3)+pow(y,3)+pow(z,3)+2*pow(x,2)*y+3*x*y*z;
printf("Result is %d\n", result);
printf("\n");
return 0;
}
