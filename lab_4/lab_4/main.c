#include "calorie.h"

int main(void) {
	int gender = 0, activLev = 0;
	double weight = 0.0, height = 0.0, age = 0.0;
	FILE* input_file = fopen("input.dat", "r");

	fscanf(input_file, "%d\n%lf\n%lf\n%lf\n%d", &gender, &weight, &height, &age, &activLev);

	double BMR = bmrCalc(gender, weight, height, age);

	double finalCal = actLev(activLev, BMR);
	printf("%lf\n%d\n%lf\n%lf", finalCal, gender, weight, height);

}

/* 
Female = 0 / Male = 1
Weight: 
Height:
Age:
Activity Level:
	0 - Sed
	1 - Low
	2 - Moderate
	3 - High
	4 - Extra
*/