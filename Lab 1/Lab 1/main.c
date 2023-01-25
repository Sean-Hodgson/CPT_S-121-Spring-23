/*
	Name: Sean H
	Course: CptS 121
	Lab Sect: 3
	Date: 1/17
	Spring '23
	Assignment: Lab Assignment 1 Task 2

	Description: In this program you can do addition, subrtraction, muliplication, and division alongside being able to use Ohm's Law, Joule's Law, casting an integer to a float, checking if an int is even/odd, use the polynomial order of thirds law, and find the cirumfrence of a circle with the radius.".
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h> 

int main(void) {
	int number1_int = 0, number2_int = 0; // Two variable declarations - reserves two memory blocks for integers and sets them to 0

	double number1_float = 0.0, number2_float = 0.0; // reserves two memory blocks for numbers with high precision (floating point)


	printf("Enter two integer values: "); // Prompt User
	scanf("%d%d", &number1_int, &number2_int); // read integers typed - %d is for decimal, i.e. integers

	// Adding
	int sum = number1_int + number2_int;
	printf("%d", sum);

	// Subtracting
	int difference = number2_int - number1_int;
	printf("\n%d", difference);

	// Multiplication 
	int multi = number1_int * number2_int;
	printf("\n%d", multi);

	// Div 1_Int by 2_Int
	int div = number1_int / number2_int;
	double div_float = number1_int / number2_int;
	printf("\n%d and %lf", div, div_float);

	printf("Enter two floating point values: "); // Prompt User
	scanf("%lf%lf", &number1_float, &number2_float);


	// Div 1_Int by 2_Float
	int div2 = number1_int / number2_float;
	double div2_float = number1_int / number2_float;
	printf("\n%d and %lf", div2, div2_float);

	// Cast 1_int as a fp-value and divide by number2_int

	double int1_float = (double) number1_int;
	double cast = int1_float / number2_int;
	printf("\n%lf", cast);

	// Mod num1_float by num2_float
	printf("\nMod: %d", ((int)number1_float % (int)number2_float));

	// Determine if even or odd
	int mod1 = number1_int % 2;
	int mod2 = number1_int % 2;
	printf("\n Even/Odd: %d and %d", mod1, mod2);


	// Ohm's Law
	int current = 0;
	int resistance = 0;

	printf("\nPlease enter a current, and resistance: ");
	scanf("%d%d", &current, &resistance);
	int Ohm = current * resistance;
	printf("\nVoltage: %d", Ohm);


	// Joule's Law
	int voltage = 0;
	int res = 0;
	printf("\nPlease enter a voltage, and resistance: ");
	scanf("%d%d", &voltage, &res);
	int vsquared = voltage * voltage;
	int joule = vsquared / res;
	printf("\n Power: %d", joule);

	// Polynomial
	int x = 0;
	int y = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("\nPlease enter x, y, a, b, c, and d: ");
	scanf("%d%d%d%d%d%d", &x, &y, &a, &b, &c, &d);

	int poly = 3 * (a * (x * x * x)) + (1 / 4) * (b * (x * x)) + 10 * (c * x) + (-5) * d;
	printf("\nPoly: %d", poly);
	
	// Circumference
	double radius = 0.0;
	double pi = 3.14159265358979323846264338327950288419716939937510; // can use the math.h for this in future. 
	printf("\nPlease enter the Radius:");
	scanf("%lf", &radius);
	double two = 2.0;
	double circumf = two * pi * radius;
	printf("%lf", circumf);


	return 0;
}