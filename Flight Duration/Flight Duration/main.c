// MAIN
#include "projectile.h"


int main(void) {
	double theta = get_theta();
	double distance = get_distance();
	double velocity = get_velocity();
	double time = calc_time(distance, velocity, theta);
	double height = calc_height(velocity, theta, G, time);
	display_results(time, height);

	return 0;
}