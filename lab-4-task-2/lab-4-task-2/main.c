#include "bonus.h"


int main(void) {
	double total = allStar() + regSeason() + worldSeries() + goldSlug() + silvSlug() + homeRun() + battingAvg();
	printf("%lf", total);
}