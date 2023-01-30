/*
	Name: Sean H
	Course: CptS 121
	Lab Sect: 3
	Date: 1/25
	Spring '23
	Assignment: Lecture Task
	Description: 
*/
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	double gp1 = 0.0, gp2 = 0.0, gp3 = 0.0, w_gp = 0.0, gpa = 0.0;
	int c1 = 0, c2 = 0, c3 = 0, cTotal= 0;
	printf("Please enter the grade point from class 1:");
	scanf("%lf", &gp1);

	printf("Please enter the credit count from class 1:");
	scanf("%d", &c1);

	printf("Please enter the grade point from class 2:");
	scanf("%lf", &gp2);

	printf("Please enter the credit count from class 2:");
	scanf("%d", &c2);

	printf("Please enter the grade point from class 3:");
	scanf("%lf", &gp3);

	printf("Please enter the credit count from class 3:");
	scanf("%d", &c3);

	cTotal = c1 + c2 + c3;


	w_gp = (gp1 * c1) + (gp2 * c2) + (gp3 * c3);

	
	gpa = w_gp / cTotal;


	printf("----------------------------------------");
	printf("\n|Class 1: GP: %.2lf		Credits: %d|\n|Class 2:	GP: %.2lf		Credits: %d|\n|Class 3:	GP: %.2lf		Credits: %d|\n|GPA: %.2lf", gp1, c1, gp2, c2, gp3, c3, gpa);
	return 0;
}