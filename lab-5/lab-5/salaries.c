#include "salaries.h"

double read_double(FILE* infile) {
	double test = 0.0;
	fscanf(infile, "%lf", &test);
	return test;
}