#include "bonus.h"



double allStar(void) {
	printf("Did the player make an All-Star Game Appearance? y/n");
	char result = '\0';
	scanf(" %c", &result);
	if (result == 'y') {
		double bonus = 0.0;
		return 25000;
	}
	if (result == 'n') {
		return 0;
	}
}
double regSeason(void) {

	printf("Was the Player a Regular Season MVP? y/n");
	char result = '\0';
	scanf(" %c", &result);
	if (result == 'y') {
		return 75000;
	}
	if (result == 'n') {
		return 0;
	}
	
}
double worldSeries(void) {
	printf("Was the Player a World Series MVP? y/n");
	char result = '\0';
	scanf(" %c", &result);
	if (result == 'y') {
		return 100000;
	}
	if (result == 'n') {
		return 0;
	}
}
double goldSlug(void) {
	printf("Did the player get a Gold Glove Award? y/n");
	char result = '\0';
	scanf(" %c", &result);
	if (result == 'y') {
		return 50000;
	}
	if (result == 'n') {
		return 0;
	}
}
double silvSlug(void) {
	printf("Did the player get a Silver Slugger Award? y/n");
	char result = '\0';
	scanf(" %c", &result);
	if (result == 'y') {
		return 35000;
	}
	if (result == "n") {
		return 0;
	}
}
double homeRun(void) {
	printf("Was the player the Home Run Champ? y/n");
	char result = '\0';
	scanf(" %c", &result);
	if (result == 'y') {
		return 25000;
	}
	if (result == 'n') {
		return 0;
	}
}
double battingAvg(void) {
	printf("Was your player the Batting Average Champ? y/n");
	char result = '\0';
	scanf(" %c", &result);
	if (result == 'y') {
		return 25000;
	}
	if (result == "n") {
		return 0;
	}
}