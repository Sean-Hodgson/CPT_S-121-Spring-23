#include "compute.h"


int main(void) {
	FILE* infile = fopen("input.txt", "r");
	FILE *outfile = fopen("output.txt", "w");
	/*double num = 0.0;
	int count = 0;
	double sum = 0;
	while (!feof(infile))
	{
		count = count + 1;
		fscanf(infile, "%lf", &num);
		sum = sum + num;
	}
	printf("%lf", sum);
	return 0;*/
	// *************************************************
	/*int	num1 = read_int(infile);
	int num2 = read_int(infile);
	int result = greatest_common_divisor(num1, num2);
	printf("%d\n", result);

	return 0;*/
	//**************************************************

	double max = 0;
	while (!feof(infile)) {
		double num = 0;
		fscanf(infile, "%lf", &num);
		if (num > max) {
			max = num;
		}
		else {
			max = max;
		}
	}
	printf("%lf", max);

}