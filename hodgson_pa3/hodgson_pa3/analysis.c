#include "analysis.h"


double read_double(FILE* infile) {
	double test = 0.0;
	fscanf(infile, "%lf", &test);
	return test;
}
int read_int(FILE* infile) {
	int test = 0;
	fscanf(infile, "%d", &test);
	return test;
}

double calculate_sum(double num1, double num2, double num3, double num4, double num5) {
	return num1 + num2 + num3 + num4 + num5;
}

double calculate_mean(double sum, int number) {
	if (number != 0) {
		return sum / number;
	}
	else {
		return -1.0;
	}
}
double calculate_deviation(double number, double mean){
	return number - mean;
}

double calculate_variance(double dev1, double dev2, double dev3, double dev4, double dev5, int devNum) {
	return (pow(dev1, 2) + pow(dev2, 2) + pow(dev3, 2) + pow(dev4, 2) + pow(dev5, 2)) / devNum;
}

double calculate_standard_devation(double variance) {
	return sqrt(variance);
}

double find_max(double num1, double num2, double num3, double num4, double num5) {
	double max = num1;

	if (num2 > max) {
		max = num2;
	}
	if (num3 > max) {
		max = num3;
	}
	if (num4 > max) {
		max = num4;
	}
	if (num5 > max) {
		max = num5;
	}

	return max;
}

double find_min(double num1, double num2, double num3, double num4, double num5) {
	if ((num1 < num2) && (num1 < num3) && (num1 < num4) && (num1 < num5)) {
		return num1;
	}
	if ((num2 < num1) && (num2 < num3) && (num2 < num4) && (num2 < num5)) {
		return num2;
	}

	if ((num3 < num1) && (num3 < num2) && (num3 < num4) && (num3 < num5)) {
		return num3;
	}

	if ((num4 < num1) && (num4 < num2) && (num4 < num3) && (num4 < num5)) {
		return num4;
	}

	if ((num5 < num1) && (num5 < num2) && (num5 < num3) && (num5 < num4)) {
		return num5;
	}


}

void print_double(FILE *outfile, double number) {
	fprintf(outfile, "%.2lf\n", number);
	return;
}