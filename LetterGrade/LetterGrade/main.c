#include "LetterGrade.h"

int main(void) {


	FILE* input_stream = fopen("scores.txt", "r");
	double s1 = 0.0, s2 = 0.0, s3 = 0.0;
	// input_stream = fopen("scores.txt", "r"); // relative path name for the file name

	fscanf(input_stream, "%lf\n%lf\n%lf\n", &s1, &s2, &s3);

	printf("Score 1: %.1lf\nScore 2: %.1lf\nScore 3: %.1lf", s1, s2, s3);

	fclose(input_stream);
	return 0;
}