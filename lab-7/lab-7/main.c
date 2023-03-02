#include "billing.h"


int main(void) {
	FILE* input = fopen("input.dat", "r");
	FILE* output = fopen("output.dat", "w");
	int month = 0, year = 0;
	double phoneNum = 0.0, hours = 0.0;


	fscanf(input, "%d %d \n %lf \n %lf", &month, &year, &phoneNum, &hours);

	printf("%d\n%d\n%lf\n%lf", month, year, phoneNum, hours);
	double average = 0.0, finalCost = 0.0;
	charges(hours, &average, &finalCost);

	fprintf(output, "Total: %lf\nAverage Cost / Hour: %lf", finalCost, average);


}