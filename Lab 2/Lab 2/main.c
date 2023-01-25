/*
	Name: Sean H
	Course: CptS 121
	Lab Sect: 3
	Date: 1/24
	Spring '23
	Assignment: Lab Assignment 2
	Description: In this program you can do addition, subrtraction, muliplication, and division alongside being able to use Ohm's Law, Joule's Law, casting an integer to a float, checking if an int is even/odd, use the polynomial order of thirds law, and find the cirumfrence of a circle with the radius.".
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int main(void) {

	double x1 = 0.0, x2 = 0.0, y1 = 0.0, y2 = 0.0, slopetop = 0.0, slopebottom = 0.0;
	printf("Please enter the first coordinates: ");
	scanf("%lf %lf", &x1, &y1);

	printf("Please enter the second pair of coordinates: ");
	scanf("%lf %lf", &x2, &y2);
	slopetop = y2 - y1;
	slopebottom = x2 - x1;
	printf("The slope of the line is %.1lf/%.1lf", slopetop, slopebottom);

	// Average midpoint
	double midx = 0.0, midy = 0.0, bislope = 0.0, bix = 0.0, biyint= 0.0;
	midx = (x1 + x2) / 2;
	midy = (y1 + y2) / 2;
	printf("The midpoint between the two lines is: (%.1lf,%.1lf)", midx, midy);

	bislope = -1 / (slopebottom / slopetop);
	biyint = midy - (midx);

	printf("\nFirst Point: (%.1lf,%.1lf)\nSecond Point: (%.1lf,%.1lf)\nEquation: y = mx+b", x1, y1, x2, y2);





	
	return 0;
}