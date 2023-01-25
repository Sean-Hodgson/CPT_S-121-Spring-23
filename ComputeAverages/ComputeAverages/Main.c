/*
	Name: Sean Hodgson
	Course: CptS 121
	Lab Sect: 3
	Term: Spring '23
	Date: 1/18 
	Description: This program will prompt the user to enter three exam scores, then it will proceed to compute the average of the three and then display it to the user.
*/
#define _CRT_SECURE_NO_WARNINGS

// Prompt the user for 3 exams scores, compute the averages, and display the averages
#include <stdio.h>
int main(void)
{
	int exam1 = 0, exam2 = 0, exam3 = 0, sum_scores = 0;
	double average = 0.0;
	
	printf("Please enter the exam 1 score: ");
	scanf("%d", &exam1);
	printf("Please enter the exam 2 score: ");
	scanf("%d", &exam2);
	printf("Please enter the exam 3 score: ");
	scanf("%d", &exam3);


	sum_scores = exam1 + exam2 + exam3;
    average = (double) sum_scores / 3;
	
	printf("%.12lf", average);


//	sum_scores = exam1 + exam2 + exam3;
//	average = sum_scores / 3;

	return 0;
}

