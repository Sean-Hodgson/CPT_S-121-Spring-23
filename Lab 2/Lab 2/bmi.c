/*
	Name: Sean H
	Course: CptS 121
	Lab Sect: 3
	Date: 1/24
	Spring '23
	Assignment: Lab Assignment 2 Task 2
	Description: In this program you can do addition, subrtraction, muliplication, and division alongside being able to use Ohm's Law, Joule's Law, casting an integer to a float, checking if an int is even/odd, use the polynomial order of thirds law, and find the cirumfrence of a circle with the radius.".
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>

int bmi(void) {
	double preheightft = 0.0, preheightin = 0.0, weight = 0.0, result = 0.0, heightin = 0.0;

	printf("Please enter your height in Feet and Inches.\nIE. 5'11 = 5 11\nYour height:");
	scanf("%lf%lf", &preheightft, &preheightin);
	printf("Please enter your weight in pounds:");
	scanf("%lf", &weight);

	heightin = (preheightft * 12) + preheightin;
	result = (weight / pow(heightin, 2)) * 703;

	printf("Your BMI: %lf", result);
	// 5 9.6

	





	return 0;
}