/*
	Name: Sean Hodgson
	Course: CptS 121
	Lab Sect: 3
	Date: 2/28
	Spring '23
	Assignment: PA 4
	Description: This program lets you play the dice game Craps!

	Current File: craps.h
	File Description: This is the header file which contains all of the function prototypes.
*/


// guard code
#ifndef CRAPS_H // part of guard code
#define CRAPS_H // part of guard code
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <stdlib.h> // rand  *Dont call multiple times*)
#include <time.h> // time()
#define MAX_LEN 128


/*
* Function: start_menu()
* Description: Provided options for start menu.
* Input parameters: The users initial.
* Returns: Nothing
* Preconditions: The users name has been input and the function is called.
* Postconditions: Start menu is displayed and user can choose options.
*/
void start_menu(char name);


/*
* Function: chatter_messages()
* Description: Displays chat-like messages in response to the users actions.
* Input parameters: The number of rolls, if they won, and their current/initial bank balances.
* Returns: Nothing
* Preconditions: All of the above variables were input and the function is called.
* Postconditions: A message is displayed to the user.
*/

void chatter_messages(int number_rolls, int win_loss, double initial_bank_balance, double current_bank_balance);


/*
* Function: start_game()
* Description: Main game function.
* Input parameters:None
* Returns: Nothing
* Preconditions: Called in main.
* Postconditions: Provided playable game.
*/
void start_game(void);

/*
* Function: print_game_rules()
* Description: Displays the rules board for the game.
* Input parameters: The users name.
* Returns: Nothing
* Preconditions: Called if the user selects it in the menu.
* Postconditions: Rules of Craps are printed.
*/
void print_game_rules(name);


/*
* Function: print_dice_graphics()
* Description: Takes the input integer and prints it as a dice.
* Input parameters: An int 1-6
* Returns: Nothing
* Preconditions: A random dice number is generated before being called.
* Postconditions: One side of Dice is displayed.
*/
void print_dice_graphics(int dice_num);


/*
* Function: get_bank_balance()
* Description: Prompts the user to enter their starting balance and scans for an input.
* Input parameters: None
* Returns: Users bank balance
* Preconditions: Its called when the game is started.
* Postconditions: Returns double containing the balance.
*/
double get_bank_balance(void);

/*
* Function: get_wager_amount()
* Description: Asks user for wager amount and returns it.
* Input parameters: None
* Returns: Wager amount as a double.
* Preconditions: The function is called.
* Postconditions: Returns wager as a double.
*/
double get_wager_amount(void);


/*
* Function: check_wager_amount()
* Description: Checks to see if the wager is bigger than the balance.
* Input parameters: Wager and Balance
* Returns: 1,0: 1 if the wager is accepted and 0 if the wager is too big.
* Preconditions: The user input a wager and has a balance.
* Postconditions: The result is returned.
*/
int check_wager_amount(double wager, double balance);


/*
* Function: roll_die()
* Description: Generated random numbers for the dice.
* Input parameters: None
* Returns: Random number 1-6
* Preconditions: The function is called.
* Postconditions:A random integer is returned between one and six.
*/
int roll_die(void);


/*
* Function: calculate_sum_dice()
* Description: Takes the 2 input numbers and adds them
* Input parameters: Two integers
* Returns: the sum of the two integers.
* Preconditions: 2 random numbers have been generated.
* Postconditions: the sum is returned as an integer.
*/
int calculate_sum_dice(int die1_value, int die2_value);


/*
* Function: is_win_loss_or_point()
* Description: Determines the outcome of the first roll.
* Input parameters: The sum of the rolls.
* Returns: If the user won, lost, or continues to play: 1,0,-1
* Preconditions: The dice were added together and input when the function is called
* Postconditions: The outcome is returned.
*/
int is_win_loss_or_point(int sum_dice);


/*
* Function: is_point_loss_or_neither()
* Description: Determines the outcome of any round after the first.
* Input parameters: The sum of the rolls and the current point value.
* Returns: The outcome 1, 0 or -1, win, loss, or neither.
* Preconditions: It isnt the first round and the die have been rolled.
* Postconditions: The outcome of the roll is decided.
*/
int is_point_loss_or_neither(int sum_dice, int point_value);


/*
* Function: print_dice_()
* Description: Prints the starting dice graphics
* Input parameters: File with dice graphics
* Returns: Nothing
* Preconditions: Called with the start of the program.
* Postconditions: Dice are displayed.
*/
void print_dice(FILE* fptr);

/*
* Function: get_name()
* Description: Gets the user's first initial.
* Input parameters: None
* Returns: char of first initial
* Preconditions: Called by the start of the program.
* Postconditions:The users first initial is returned to be used in the rules.
*/
char get_name();


/*
* Function: adjust_bank_balance()
* Description: Manages the users bank balance.
* Input parameters: The bank balance, wager amount, and if they won or lost;
* Returns: New bank balance.
* Preconditions: The user has input a balance, wager, and a round has been played
* Postconditions: The balance is updated.
*/
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract);

#endif