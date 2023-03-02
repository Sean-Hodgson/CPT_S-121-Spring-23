#include "compute.h"



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

double greatest_common_divisor(int num1, int num2) {
	int i = 0;
	num1 = abs(num1);
	num2 = abs(num2);

	for (i = 1; i <= num1 && i <= num2; ++i)
	{
		if (num1 % i == 0 && num2 % i == 0)
			return i; /* if n1 and n2 is completely divisible by i, the divisible number will be the GCD_Num */
	}

	
}


