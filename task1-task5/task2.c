#include <stdio.h>
#include <math.h>
double function(double x, double y) {	
	double f;
	return f = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
}

void main() {
	double x = 5;
	double y = 8.2537;
	double f;
	f=function(x, y);
	printf("x = % .4lf\n", x);
	printf("y = % .4lf\n", y);
	printf("f = % .4lf\n", f);
	printf("x=");
	scanf_s("%lf", &x);
	printf("y=");
	scanf_s("%lf", &y);
	f = function(x, y);
	printf("f = % .4lf\n", f);

}