#include "billing.h"


void charges(double hours, double* average_cost, double* total_charge) {
	double finalCost = 0.0;
	if (hours > 10) {

		finalCost = (((hours - (double) 10) * 1.99) + 7.99);

		*total_charge = finalCost;
		*average_cost = (finalCost / hours);

	} 
	else if (hours == 10) {
		finalCost = 7.99;

		*total_charge = finalCost;
		*average_cost = (finalCost / hours);
	}
	else if (hours < 10) {
		finalCost = 7.99;

		*total_charge = finalCost;
		*average_cost = (finalCost / hours);
	}

}