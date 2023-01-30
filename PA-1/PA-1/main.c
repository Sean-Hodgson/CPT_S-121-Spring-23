/*
	Name: Sean Hodgson
	Course: CptS 121
	Lab Sect: 3
	Date: 1/20
	Spring '23
	Assignment: PA 1
	Description: This program can evaluate the following with variables provided: Newton's Second Law of Motion, The volume of a cylinder, character encoding, gravity, resistive divider, the distance between two coordinate pairs, and solving a general equation".
*/

// Mathematical ops + addition, / division, - subtraction, * multi, % mod (remainder of int div)
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define const1 73
#define const2 12
#include <stdio.h>
#include <math.h> // sqrt () pw(mass,2) M_PI

int main(void){
	
// Newton's Second Law of Motion
// vars: mass * acceleration
double mass = 0.0, acceleration = 0.0, force = 0.0;
printf("Newton's Second Law of Motion: force = mass * acceleration");
printf("\nPlease enter the mass and acceleration: ");
scanf("%lf%lf", &mass, &acceleration);
force = mass * acceleration;
printf("Newton's Second Law: mass * acceleration = %lf * %lf = %lf", mass, acceleration, force);

// The Volume of a cylinder
// volume_cylinder = PI * radius^2 * height
double height = 0.0, radius = 0.0, volume = 0.0;
printf("\nCalculating the volume of a cylinder: volume = PI * radius^2 * height");
printf("\nPlease enter the radius and height: ");
scanf("%lf%lf", &radius, &height);
volume = M_PI * powl(radius, 2) * height;
printf("Volume of a cylinder: PI * radius^2 * height = %lf * %lf^2 * %lf = %lf", M_PI, radius, height, volume);

// Character encoding
char letter = "\0", result_letter = '\0';
printf("\nEnter a char: ");
scanf(" %c", &letter);
result_letter = (letter - 'a') + 'A';
printf("original char: %c, result: %c\n", letter, result_letter);

// Gravity
double mass1 = 0.0, mass2 = 0.0, distance = 0.0, gforce = 0.0;
double gravity = 0.0000000000667;
printf("\nCalculating force of gravity:");
printf("\nPlease enter mass 1, mass2, and the distance between the center of each mass: ");
scanf("%lf%lf%lf", &mass1, &mass2, &distance);
gforce = gravity * mass1 * mass2 / powl(distance, 2);
printf("Gravity: G * mass1 * mass2 / distance^2 = %.16lf * ((%lf * %lf) / %lf^2)) = %.16lf", gravity, mass1, mass2, distance, gforce);

// Resistive Divider
double voltOut = 0.0, voltIn = 0.0, r1 = 0.0, r2 = 0.0;
printf("\nCalculating the output voltage:");
printf("\nPlease enter the Incoming Voltage, The resistance of the first resistor, and the second resistor: ");
scanf("%lf%lf%lf", &voltIn, &r1, &r2);
voltOut = r2 / (r1 + r2) * voltIn; 
printf("Resistive Divider: vout = r2 / (r1 + r2) * vin = %lf / (%lf + %lf) * %lf = %lf", r2, r1, r2, voltIn, voltOut);

// Finding the distance between two points
double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, resultx = 0.0, resulty = 0.0, result = 0.0; 
printf("\nCalculating the distance between two points:");
printf("\nPlease enter the first pair of coordinates: ");
scanf("%lf%lf", &x1, &y1);
printf("\nPlease enter the second pair of coordinates: ");
scanf("%lf%lf", &x2, &y2);
result = sqrt(powl(x1 - x2, 2) + powl(y1 - y2, 2));
printf("Distance between two points: sqrt((x1-x2)^2 + (y1-y2)^2) = sqrt((%lf - %lf)^2 + (%lf-%lf)^2) = %lf", x1, x2, y1, y2, result);

// General Equation
// y = (73 / 12) - x * z + a / (a % 2)
int a = 0;
double x = 0.0, z = 0.0, GEresult = 0.0;
printf("\nPlease enter variables for x, z, and a:");
scanf("%lf%lf%d", &x, &z, &a);
GEresult = ((double) const1 / (double) const2) - x * z + a / (a % 20);
printf("General Equation: (73 / 12) - x * z + a / (a % 2) = (%d/%d) - %lf * %lf / %d / (%d %% 20) = %lf", const1, const2, x, z, a, a, GEresult);

return 0;
}