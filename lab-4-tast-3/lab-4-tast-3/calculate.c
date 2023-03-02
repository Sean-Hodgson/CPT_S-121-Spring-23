#include "calculate.h"


double averageCalc(double num1, double num2, double num3, double num4, double num5) {
	double result = (num1 + num2 + num3 + num4 + num5) / 5;
	printf("Average: %lf", result);
}
double highCalc(double num1, double num2, double num3, double num4, double num5) {
	if ((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5)) {
		printf("%lf is the Highest Value", num1);
	}
	if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5)) {
		printf("%lf is the Highest Value", num2);
	}

	if ((num3 > num1) && (num3 > num2) && (num3 > num4) && (num3 > num5)) {
		printf("%lf is the Highest Value", num3);
	}

	if ((num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5)) {
		printf("%lf is the Highest Value", num4);
	}

	if ((num5 > num1) && (num5 > num2) && (num5 > num3) && (num5 > num4)) {
		printf("%lf is the Highest Value", num5);
	}

}
double lowCalc(double num1, double num2, double num3, double num4, double num5) {
	if ((num1 < num2) && (num1 < num3) && (num1 < num4) && (num1 < num5)) {
		printf("%lf is the Lowest Value", num1);
	}
	if ((num2 < num1) && (num2 < num3) && (num2 < num4) && (num2 < num5)) {
		printf("%lf is the Lowest Value", num2);
	}

	if ((num3 < num1) && (num3 < num2) && (num3 < num4) && (num3 < num5)) {
		printf("%lf is the Lowest Value", num3);
	}

	if ((num4 < num1) && (num4 < num2) && (num4 < num3) && (num4 < num5)) {
		printf("%lf is the Lowest Value", num4);
	}

	if ((num5 < num1) && (num5 < num2) && (num5 < num3) && (num5 < num4)) {
		printf("%lf is the Lowest Value", num5);
	}
}