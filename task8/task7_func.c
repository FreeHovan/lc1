#include <stdio.h>
#include <math.h>
#include "func.h"
 double x, y, result;
void function(void) {
	result = pow(cos(x) - cos(y), 2) - pow(sin(x) - sin(y), 2);
}