#include "calculate.h"


int main(void) {
	FILE* input_file = fopen("input.dat", "r");
	int choice = 0;
	double num1 = 0.0, num2 = 0.0, num3 = 0.0, num4 = 0.0, num5 = 0.0;

	fscanf(input_file, "%lf\n%lf\n%lf\n%lf\n%lf", &num1, &num2, &num3, &num4, &num5);

	printf("Please choose one of the following:");
	printf("\n1. Average");
	printf("\n2. High Value");
	printf("\n3. Low Value\n");
	scanf("%d", &choice);

	if (choice == 1) {
		averageCalc(num1, num2, num3, num4, num5);
	}
	if (choice == 2) {
		highCalc(num1, num2, num3, num4, num5);
	}
	if (choice == 3) {
		lowCalc(num1, num2, num3, num4, num5);
	}
}