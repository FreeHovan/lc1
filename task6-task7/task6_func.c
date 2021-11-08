#include <stdio.h>
#include <math.h>
 extern double x, y, result;
void function(void) {
	result = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
}