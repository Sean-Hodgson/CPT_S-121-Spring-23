#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>


double get_height();
double get_weight();
double convert_feet_to_inches(double heightFt);
double calculate_bmi(double weight, double height);
void displayBMI(double BMI);
int main(void) {
	double weight = 0.0, heightInch = 0.0, heightFt = 0.0, bmi = 0.0;
	heightFt = get_height();
	weight = get_weight();
	heightInch = convert_feet_to_inches(heightFt);
	bmi = calculate_bmi(weight, heightInch);
	displayBMI(bmi);
	return 0;
}

double get_height() {
	double heightFt = 0.0;
	printf("Please enter your height in feet: ");
	scanf("%lf", &heightFt);
	return heightFt;
}

double get_weight() {
	double inWeight = 0.0;
	printf("Please enter your weight in pounds: ");
	scanf("%lf", &inWeight);
	return inWeight;
}

double convert_feet_to_inches(double heightFt) {
	double heightIn = 0.0;
	heightIn = heightFt * 12;

	return heightIn;
}

double calculate_bmi(double weight, double heightInch){
	double BMI = 0.0;
	BMI = (weight / pow(heightInch, 2)) * 703;
	return BMI;
}

void displayBMI(double BMI) {
	printf("Calculated BMI: %lf", BMI);
	return;
}