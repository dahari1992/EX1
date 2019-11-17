#include<stdio.h>
#include"myMath.h"

int main()
{
double x;
printf("please enter a number: ");

scanf("%lf",&x);
double first=(sub(add(Exp(x),Pow(x,3)),2));
double sec=(add(mul(3,x),mul(2,Pow(x,2))));
double thierd=(div(mul(4,Pow(x,3)),sub(5,mul(2,x))));


printf("f(x)=e^x+x^3-2 at the point %.4lf is: %.4lf: \n" ,x, first);
printf("f(x)= 3x+2x^2 at the point %.4lf is: %.4lf: \n",x, sec);
printf("f(x)=(4x^3)/(5-2x) at the point %.4lf is: %.4lf: \n" ,x, thierd);

return 0;

}
