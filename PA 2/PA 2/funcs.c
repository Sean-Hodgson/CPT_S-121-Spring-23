#include "main.h"

/*
Function: calculate_newtons_2nd_law()
Date Created: 2/1
Date Last Modified: 2/3
Description: Take the mass and acceleration and calculates the force.
Input Parameters: Mass and Acceleration
Returns: The force be asserted.
Preconditions: Mass and Acceleration were scanned in and available
Postconditions: Returns the calculated Force
*/
double calculate_newtons_2nd_law(double mass, double acceleration) 
{
	double newtLaw = mass * acceleration;
	return newtLaw;
}


/*
Function: calculate_volume_cylinder()
Date Created: 2/1
Date Last Modified: 2/3
Description: Takes the input radius and height and calculates the volume of the given cylinder.
Input Parameters: Radius and Height
Returns: The Cylinder's volume
Preconditions: radius and height were scanned in and available.
Postconditions: Returns the calculated volume of the given cylinder.
*/
double calculate_volume_cylinder(double radius, double height) 
{
	double volume_cyl = M_PI * pow(radius, 2) * height;
	return volume_cyl;

}

/*
Function: perform_chracter_encoding()
Date Created: 2/1
Date Last Modified: 2/3
Description: Takes the input character and calculates the encoded character.
Input Parameters: Any ASCII character
Returns: Encoded Character
Preconditions: The plaintext_character was scanned in and available
Postconditions: Returns the encoded character.
*/
char perform_character_encoding(char plaintext_character)
{
	char encoded_character = (plaintext_character - 'a') + 'A';
	return encoded_character;

}


/*
Function: calculate_gravity()
Date Created: 2/1
Date Last Modified: 2/3
Description: Takes the input masses and the distance between them and calculates the gravitational pull.
Input Parameters: mass1, mass2, and distance_grav.
Returns: Gravitational force
Preconditions: Both masses and the distance were scanned in and available
Postconditions: Returns the Gravitational force between the objects.
*/
double calculate_gravity(double mass1, double mass2, double distance_grav) 
{
	double calced_grav = G * mass1 * mass2 / (distance_grav * distance_grav);
	return calced_grav;

}

/*
Function: calculate_resistive_divider()
Date Created: 2/1
Date Last Modified: 2/3
Description: Takes the input two resistive values and the input voltage and calculates the output voltage.
Input Parameters: The two resistance values and the input voltage.
Returns: The Output Voltage
Preconditions: Both resistance values and the input voltage were scanned in and available
Postconditions: Returns the output voltage.
*/
double calculate_resistive_divider(double r1, double r2, double vin) 
{
	double resistive_div = r2 / (r1 + r2) * vin;
	return resistive_div;
}

/*
Function: calculate_distance_bw_points();
Date Created: 2/1
Date Last Modified: 2/3
Description: Takes the two input coordinates and calculates the distance between the points.
Input Parameters: Two pairs of coordinates.
Returns: The distance between the given coordinate pairs.
Preconditions: The two coordinate pairs were scanned in and available.
Postconditions: Returns the distance between the given points.
*/
double calculate_distance_bw_points(double x1, double x2, double y1, double y2) 
{
	double distance_bw_points = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
	return distance_bw_points;
}

/*
Function: gen_equation);
Date Created: 2/1
Date Last Modified: 2/3
Description: Takes the three input variables and calculates the equation using them.
Input Parameters: Two floating point values and an integer.
Returns: The value of the caclulated equation.
Preconditions: The three variables were scanned in and available.
Postconditions: Returns the solution to the calculated equation.
*/
double gen_equation(double gen_x, double gen_z, int gen_a) 
{
	double gen_eq_final = ((double)const1 / (double)const2) - gen_x * gen_z + gen_a / (gen_a % 20);
	return gen_eq_final;
}












