#include "salaries.h"


int main(void) {
	FILE *inFile = fopen("salaries.txt", "r"), *outFile = fopen("output.txt", "w");

	double sal1 = read_double(inFile);
	double sal2 = read_double(inFile);
	double sal3 = read_double(inFile);
	double sal4 = read_double(inFile);
	double 	sum = sal1 + sal2 + sal3 + sal4;

		if (sum < 15000)
		{
			printf("l");
		}
		if (15000 <= sum && sum <= 200000) {
			printf("m");
		}
		if (sum > 200000) {
			printf("h");
		}

		fclose(inFile);
			
}

