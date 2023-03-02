/*
    Name: Sean Hodgson
    Course: CptS 121
    Lab Sect: 3
    Date: 2/28
    Spring '23
    Assignment: PA 4
    Description: This program lets you play the dice game Craps!

    Current File: main.c
    File Description: This file displays the starting graphics and starts the game.
*/


#include "craps.h"



int main(void) {
    // Dice images were gotten from: https://www.asciiart.eu/miscellaneous/dice posted by user "valkyrie"
    srand((unsigned int)time(NULL));

    FILE* dice = NULL;
    dice = fopen("imaage.txt", "r");
   
    print_dice(dice);
    fclose(dice);

    char name = get_name();
    start_menu(name);
 




	return 0;
}
