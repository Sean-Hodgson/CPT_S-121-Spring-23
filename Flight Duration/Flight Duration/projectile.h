// Declare All Header Lines Here
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define G 32.17

// Function Prototypes
double get_theta(void);
double get_distance(void);
double get_velocity(void);
double calc_time(double distance, double velocity, double theta);
double calc_height(double velocity, double theta, double grav, double time);
void display_results(double time, double height);