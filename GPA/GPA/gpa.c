#include "gpa.h"

double get_grade_point(int class_num)
{
	double grade_point = 0.0;
	printf("Enter the grade point earned for class %d:", class_num);
	scanf("%lf", &grade_point);

	return grade_point;

}
double get_credits(int class_num)
{
	int credits = 0;
	printf("Enter the credits earned for class %d:", class_num);
	scanf("%d", &credits);

	return credits;

}
double compute_gpa(double wgp, int cTotal)
{
	return wgp / cTotal;
}