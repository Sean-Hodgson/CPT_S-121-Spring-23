#include "projectile.h"
// Declare Function Behav. Here

double get_theta() {
	double theta = 0.0;
	printf("Please enter the theta var: ");
	scanf("%lf", &theta);
	return theta;
}
double get_distance() {
	double distance = 0.0;
	printf("Please enter the distance var: ");
	scanf("%lf", &distance);
	return distance;
}
double get_velocity() {
	double velocity = 0.0;
	printf("Please enter the velocity var: ");
	scanf("%lf", &velocity);
	return velocity;
}

double calc_time(double distance, double velocity, double theta) {
	double time = 0.0;
	time = distance / (velocity * cos(theta));
	return time;
}
double calc_height(double velocity, double theta, double grav, double time) {
	double height = 0.0;
	height = velocity * sin(theta) * time - ((G * pow(time, 2) / 2));
	return height;
}
void display_results(double time, double height) {
	printf("Time: %lf\nHeight: %lf", time, height);
	return;
}