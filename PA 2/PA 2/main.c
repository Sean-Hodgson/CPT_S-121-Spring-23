#include "main.h"

int main(void) {
	
	double mass = 0.0, acceleration = 0.0;
	printf("Newton's Second Law of Motion: force = mass * acceleration");
	printf("\nPlease enter the mass and acceleration: ");
	scanf("%lf%lf", &mass, &acceleration);
	double newt_law_final = calculate_newtons_2nd_law(mass, acceleration);
	printf("Newton's Second Law: mass * acceleration = %lf * %lf = %.2lf", mass, acceleration, newt_law_final);

	double radius = 0.0, height = 0.0;
	printf("\nCalculating the volume of a cylinder: volume = PI * radius^2 * height");
	printf("\nPlease enter the radius and height: ");
	scanf("%lf%lf", &radius, &height);
	double cyl_vol_final = calculate_volume_cylinder(radius, height);
	printf("Volume of a cylinder: PI * radius^2 * height = %lf * %lf^2 * %lf = %.2lf", M_PI, radius, height, cyl_vol_final);


	char letter = '\0';
	printf("\nEnter a char: ");
	scanf(" %c", &letter);
	char encoded_char_final = perform_character_encoding(letter);
	printf("original char: %c, result: %c\n", letter, encoded_char_final);


	double mass1 = 0.0, mass2 = 0.0, distance_grav = 0.0;
	printf("\nCalculating force of gravity:");
	printf("\nPlease enter mass 1, mass2, and the distance between the center of each mass: ");
	scanf("%lf%lf%lf", &mass1, &mass2, &distance_grav);
	double grav_final = calculate_gravity(mass1, mass2, distance_grav);
	printf("Gravity: G * mass1 * mass2 / distance^2 = %.16lf * ((%lf * %lf) / %lf^2)) = %.16lf", G, mass1, mass2, distance_grav, grav_final);

	double voltIn = 0.0, r1 = 0.0, r2 = 0.0;
	printf("\nCalculating the output voltage:");
	printf("\nPlease enter the Incoming Voltage, The resistance of the first resistor, and the second resistor: ");
	scanf("%lf%lf%lf", &voltIn, &r1, &r2);
	double voltOut = calculate_resistive_divider(r1, r2, voltIn);
	printf("Resistive Divider: vout = r2 / (r1 + r2) * vin = %lf / (%lf + %lf) * %lf = %.2lf", r2, r1, r2, voltIn, voltOut);

	
	double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0, resultx = 0.0, resulty = 0.0, result = 0.0;
	printf("\nCalculating the distance between two points:");
	printf("\nPlease enter the first pair of coordinates: ");
	scanf("%lf%lf", &x1, &y1);
	printf("\nPlease enter the second pair of coordinates: ");
	scanf("%lf%lf", &x2, &y2);
	double point_distance = calculate_distance_bw_points(x1, x2, y1, y2);
	printf("Distance between two points: sqrt((x1-x2)^2 + (y1-y2)^2) = sqrt((%lf - %lf)^2 + (%lf-%lf)^2) = %.2lf", x1, x2, y1, y2, point_distance);
	
	
	int a = 0;
	double x = 0.0, z = 0.0;
	printf("\nPlease enter floating-point values for x, z, and an integer value for a:");
	scanf("%lf%lf%d", &x, &z, &a);
	double GEresult = gen_equation(x, z, a);
	printf("General Equation: (73 / 12) - x * z + a / (a % 2) = (%d/%d) - %lf * %lf / %d / (%d %% 2) = %.2lf", const1, const2, x, z, a, a, GEresult);

	return 0;
}