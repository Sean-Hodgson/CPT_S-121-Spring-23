/*
	Name: Sean H
	Course: CptS 121
	Lab Sect: 3
	Date: 1/24
	Spring '23
	Assignment: Lab Assignment 2 Task 2
	Description: This program prompts the user for their weight and height, then calculates their BMI using those variables".
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <math.h>

int main(void) {
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