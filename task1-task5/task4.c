#include <stdio.h>
#include <math.h>
double x, y,result;
void function(void);
void main() {
	 x = 5;
	 y = 8.2537;
	function();
	printf("x = % .4lf\n", x);
	printf("y = % .4lf\n", y);
	printf("f = % .4lf\n", result);
	printf("x=");
	scanf_s("%lf", &x);
	printf("y=");
	scanf_s("%lf", &y);
	 function();
	printf("result = % .4lf\n",result);

}
void function(void) {
	 result= pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
}
