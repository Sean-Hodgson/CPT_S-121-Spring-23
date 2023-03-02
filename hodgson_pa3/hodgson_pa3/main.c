/*
	Name: Sean Hodgson
	Course: CptS 121
	Lab Sect: 3
	Date: 2/10
	Spring '23
	Assignment: PA 3
	Description: This program can calculates different means and variations in class standings and GPAs;
*/


#include "analysis.h"


int main(void) {



	FILE* input_stream = fopen("input.dat", "r");
	FILE* output_stream = fopen("output.dat", "w");



	int sID_1 = read_int(input_stream);
	double GPA_1 = read_double(input_stream);
	int classStand_1 = read_int(input_stream);
	double studAge_1 = read_double(input_stream);

	int sID_2 = read_int(input_stream);
	double GPA_2 = read_double(input_stream);
	int classStand_2 = read_int(input_stream);
	double studAge_2 = read_double(input_stream);

	int sID_3 = read_int(input_stream);
	double GPA_3 = read_double(input_stream);
	int classStand_3 = read_int(input_stream);
	double studAge_3 = read_double(input_stream);

	int sID_4 = read_int(input_stream);
	double GPA_4 = read_double(input_stream);
	int classStand_4 = read_int(input_stream);
	double studAge_4 = read_double(input_stream);

	int sID_5 = read_int(input_stream);
	double GPA_5 = read_double(input_stream);
	int classStand_5 = read_int(input_stream);
	double studAge_5 = read_double(input_stream);
	
	// Calculations
	double classStand_Sum = calculate_sum(classStand_1, classStand_2, classStand_3, classStand_4, classStand_5);
	double ageSum = calculate_sum(studAge_1, studAge_2, studAge_3, studAge_4, studAge_5);


	// Calculate Mean of GPAs
	double sumGPA = calculate_sum(GPA_1, GPA_2, GPA_3, GPA_4, GPA_5);
	double meanGPA = calculate_mean(sumGPA, 5);
	print_double(output_stream, meanGPA);

	// Calculate Mean of class standings
	double meanStand = calculate_mean(classStand_Sum, 5);
	print_double(output_stream, meanStand);

	// Calculate Mean of Ages
	double meanAge = calculate_mean(ageSum, 5);
	print_double(output_stream, meanAge);

	double devGPA1 = calculate_deviation(GPA_1, meanGPA);
	double devGPA2 = calculate_deviation(GPA_2, meanGPA);
	double devGPA3 = calculate_deviation(GPA_3, meanGPA);
	double devGPA4 = calculate_deviation(GPA_4, meanGPA);
	double devGPA5 = calculate_deviation(GPA_5, meanGPA);

	double variance_GPA = calculate_variance(devGPA1, devGPA2, devGPA3, devGPA4, devGPA5, 5);
	double standard_GPAdev = calculate_standard_devation(variance_GPA);
	print_double(output_stream, standard_GPAdev);


	double minGPA = find_min(GPA_1, GPA_2, GPA_3, GPA_4, GPA_4, GPA_5);
	print_double(output_stream, minGPA);

	double maxGPA = find_max(GPA_1, GPA_2, GPA_3, GPA_4, GPA_4, GPA_5);
	print_double(output_stream, maxGPA);
	

	fclose(input_stream);
	fclose(output_stream);
	return 0;
}