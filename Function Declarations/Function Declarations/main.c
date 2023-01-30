


#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h> // sqrt () pw(mass,2) M_PI

// Func declaration, func prototype 
double f(double x);


int main(void) {
	double x = 0.0, result = 0.0;

	scanf("%lf", &x);

	result = f(x);

	printf("%lf", result);

	return 0;
}


double f(double x) // Function Header
{
	// Function Behavior, operation, algorithm
	return x * x;
}