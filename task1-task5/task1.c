#include <stdio.h>
#include <math.h>
void main() {
	double x = 5;
	double y = 8.2537;
	double f = pow(cos(x) - cos(y),2)-pow(sin(x)-sin(y),2);
	printf("x = % .4lf\n",x);
	printf("y = % .4lf\n", y);
	printf("f = % .4lf\n", f);
	printf("x=");
	scanf_s("%lf",&x);
	printf("y=");
	scanf_s("%lf", &y);
	f = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
	printf("f = % .4lf\n", f);

}