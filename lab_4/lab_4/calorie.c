#include "calorie.h"


double bmrCalc(int gender, double weight, double height, double age) {
	if (gender == 1) { // Male
		double BMR = 66 + (6.23 * weight) + (12.7 * height) - (8.8 * age);
		return BMR;
	}

	if (gender == 0) { // Female
		double BMR = 655 + (4.35 * weight) + (4.7 * height) - (4.7 * age);
		return BMR;
	}
}


double actLev(int level, double BMR) {
	if (level == 0) {
		return BMR * 1.2;
	}
	if (level == 1) {
		return BMR * 1.375;
	}
	if (level == 2) {
		return BMR * 1.55;
	}
	if (level == 3) {
		return BMR * 1.725;
	}
	if (level = 4) {
		return BMR * 1.9;
	}
}	

