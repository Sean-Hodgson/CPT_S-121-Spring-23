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

/*
* Function: print_dice_graphics()                                                                                                                     
* Description: Takes the input integer and prints it as a dice.
* Input parameters: An int 1-6                                   
* Returns: Nothing                                       
* Preconditions: A random dice number is generated before being called.                      
* Postconditions: One side of Dice is displayed.                                      
*/

void print_dice_graphics(int dice_num) {
    switch (dice_num) {
        case 1:
            printf("\n-----------\n");
            printf("|         |\n");
            printf("|    *    |\n");
            printf("|         |\n");
            printf("-----------\n");
            break;
        case 2:
            printf("\n-----------\n");
            printf("|    *    |\n");
            printf("|         |\n");
            printf("|    *    |\n");
            printf("-----------\n");
            break;
        case 3:
            printf("\n-----------\n");
            printf("| *       |\n");
            printf("|    *    |\n");
            printf("|       * |\n");
            printf("-----------\n");
            break;
        case 4:
            printf("\n-----------\n");
            printf("| *     * |\n");
            printf("|         |\n");
            printf("| *     * |\n");
            printf("-----------\n");
            break;
        case 5:
            printf("\n-----------\n");
            printf("| *     * |\n");
            printf("|    *    |\n");
            printf("| *     * |\n");
            printf("-----------\n");
            break;
        case 6:
            printf("\n-----------\n");
            printf("| *     * |\n");
            printf("| *     * |\n");
            printf("| *     * |\n");
            printf("-----------\n");
            break;



   }
    

}

/*
* Function: print_dice_()
* Description: Prints the starting dice graphics
* Input parameters: File with dice graphics
* Returns: Nothing
* Preconditions: Called with the start of the program.
* Postconditions: Dice are displayed.
*/

// Provided by https://cboard.cprogramming.com/cplusplus-programming/161868-how-use-ascii-art-c-cplusplus.html
void print_dice(FILE* file) {
        char read_string[MAX_LEN];
        while (fgets(read_string, sizeof(read_string), file) != NULL)
        printf("%s", read_string);
}

/*
* Function: print_game_rules()
* Description: Displays the rules board for the game.
* Input parameters: The users name.
* Returns: Nothing
* Preconditions: Called if the user selects it in the menu.
* Postconditions: Rules of Craps are printed.
*/


void print_game_rules(char name) {
    printf("\nHey %c, Welcome to Craps!\n\n", name);

    printf("            ******************\n");
    printf("            *   R U L E S    *\n");
    printf("            ******************\n\n");
    printf("* A player rolls two dice.\n");
    printf("* Each die has six faces. These faces contain 1, 2, 3, 4, 5, and 6 spots\n");
    printf("* After the dice have come to rest, the sum of the spots on the two upward faces is calculated\n");
    printf("    * If the sum is 7 or 11 on the first throw, the player wins.\n");
    printf("    * If the sum is 2, 3, or 12 on the first throw (called craps), the player loses(i.e.the house wins).\n");
    printf("* If the sum is 4, 5, 6, 8, 9, or 10 on the first throw, then the sum becomes the player's point.\n");
    printf("* To win, you must continue rolling the dice until you make your point. The player loses by rolling a 7 before making the point.");



}

/*
* Function: get_name()
* Description: Gets the user's first initial.
* Input parameters: None
* Returns: char of first initial
* Preconditions: Called by the start of the program.
* Postconditions:The users first initial is returned to be used in the rules.
*/

char get_name() {
    char name = '\0';
    printf("\nPlease enter your first initial (Ex: S): ");
    scanf("%c", &name);
    return name;

}

/*
* Function: calculate_sum_dice()
* Description: Takes the 2 input numbers and adds them
* Input parameters: Two integers
* Returns: the sum of the two integers.
* Preconditions: 2 random numbers have been generated.
* Postconditions: the sum is returned as an integer.
*/

int calculate_sum_dice(int die1_value, int die2_value) {
    return die1_value + die2_value;
}


/*
* Function: get_bank_balance()
* Description: Prompts the user to enter their starting balance and scans for an input.
* Input parameters: None
* Returns: Users bank balance 
* Preconditions: Its called when the game is started.
* Postconditions: Returns double containing the balance.
*/
double get_bank_balance(void) {
    double balance = 0.0;
    printf("Please enter your starting Bank Balance: ");
    scanf("%lf", &balance);
    return balance;
}

/*
* Function: roll_die()
* Description: Generated random numbers for the dice.
* Input parameters: None
* Returns: Random number 1-6
* Preconditions: The function is called.
* Postconditions:A random integer is returned between one and six.
*/
int roll_die(void) {
    return rand() % 6 + 1;
}

/*
* Function: start_game()
* Description: Main game function.
* Input parameters:None
* Returns: Nothing
* Preconditions: Called in main.
* Postconditions: Provided playable game.
*/

void start_game(void) {
    int playing, round = 1;
    double bank_balance, wager = 0.0;
    int point = 0;
    char choice = '\0';
    bank_balance = get_bank_balance();
    double init_balance = bank_balance;

    playing = 1;
    while (playing == 1) {
        if (bank_balance <= 0.0) {
            printf("\nLooks like you lost it all!\n");
            round = 1;
            bank_balance = get_bank_balance();
            init_balance = bank_balance;

        }
        if (round == 1) {


            int wagerCheck = 0;

            while (wagerCheck == 0) {
                wager = get_wager_amount();
                int wagerResult = check_wager_amount(wager, bank_balance);



                if (wagerResult == 1) {
                    wagerCheck = 1;
                    printf("\nBank Balance: %lf", bank_balance);
                }
                else if (wagerResult == 0) {
                    wagerCheck = 0;
                    printf("\nPlease enter a wager within your Balance: %lf", bank_balance);
                }

            }



            int die1 = roll_die(), die2 = roll_die();
            int result = calculate_sum_dice(die1, die2);
            print_dice_graphics(die1);
            print_dice_graphics(die2);
            printf("\nyou rolled %d!", result);

            int roundResult = is_win_loss_or_point(result);
            if (roundResult == 1) {
                bank_balance = adjust_bank_balance(bank_balance, wager, 1);
                printf("\nBank Balance: %lf", bank_balance);
                chatter_messages(round, 1, init_balance, bank_balance);
                printf("\nWould you like to play again? Y/N: ");
                choice = '\0';
                scanf(" %c", &choice);
                if (choice == 'Y') {
                    round = 1;
                    point = 0;
                }
                else {
                    playing = 0;
                }


            }

            else if (roundResult == 0) {
                bank_balance = adjust_bank_balance(bank_balance, wager, 0);
                printf("\nBank Balance: %lf", bank_balance);
                chatter_messages(round, 0, init_balance, bank_balance);
                printf("\nWould you like to play again? Y/N: ");
                choice = '\0';
                scanf(" %c", &choice);
                if (choice == 'Y') {
                    round = 1;
                    point = 0;
                }

                else if (choice == 'N') {
                    playing = 0;
                }



            }
            else {
                point = result;
                round += 1;
            }
            
        }


        if (round != 1 && point != 0) {
            choice = '\0';
            printf("\nWould you like to Roll again? Y/N: ");
            scanf(" %c", &choice);

            if (choice == 'Y') {
               round += 1;
               int die1 = roll_die();
               int die2 = roll_die();
               int result = calculate_sum_dice(die1, die2);
               print_dice_graphics(die1);
               print_dice_graphics(die2);
               printf("\nyou rolled a %d!", result);
               int nextResult = is_point_loss_or_neither(result, point);
               if (nextResult == 1) {
                    bank_balance = adjust_bank_balance(bank_balance, wager, 1);
                    printf("\nBank Balance: %lf", bank_balance);
                    chatter_messages(round, 1, init_balance, bank_balance);
                    choice = '\0';
                    printf("\nWould you like to play again? Y/N: ");
                    scanf(" %c", &choice);
                    if (choice == 'Y') {
                        round = 1;
                        point = 0;
                    }
                    else if (choice == 'N') {
                        playing = 0;
                    }
                

               }
               if (nextResult == 0) {
                   bank_balance = adjust_bank_balance(bank_balance, wager, 0);
                   printf("\nBank Balance: %lf", bank_balance);
                   chatter_messages(round, 1, init_balance, bank_balance);
                   printf("\nWould you like to play again? Y/N: ");
                   choice = '\0';
                   scanf(" %c", &choice);
                   if (choice == 'Y') {
                       point = 0;
                       round = 1;
                   }
                   else if (choice == 'N') {
                       playing = 0;
                   }

               }
              

            }
            if (choice == 'N') {
                playing = 0;
            }
        }
    }
}

/*
* Function: start_menu()
* Description: Provided options for start menu.
* Input parameters: The users initial.
* Returns: Nothing
* Preconditions: The users name has been input and the function is called.
* Postconditions: Start menu is displayed and user can choose options.
*/
void start_menu(char name) {
    int i = 0;
    while (i != 1) {
        printf("\nPlease enter a choice:\n");
        printf("1. Play Game\n");
        printf("2. View Rules\n");
        printf("3. Quit\n");
        printf("Selection: ");

        int choice = 0;
        scanf("%d", &choice);

        if (choice == 1) {
            system("cls");
            start_game();
            i = 1;
        }
        if (choice == 2) {
            system("cls");
            print_game_rules(name);
        }
        if (choice == 3) {
            i = 1;
        }
        if (choice > 3 || choice < 1)  {
            system("cls");
           
        }
    }
}

/*
* Function: get_wager_amount()
* Description: Asks user for wager amount and returns it.
* Input parameters: None
* Returns: Wager amount as a double.
* Preconditions: The function is called.
* Postconditions: Returns wager as a double.
*/
double get_wager_amount(void) {
    double wager = 0.0;
    printf("\nPlease enter your wager: ");
    scanf("%lf", &wager);
    return wager;
}

/*
* Function: chatter_messages()
* Description: Displays chat-like messages in response to the users actions.
* Input parameters: The number of rolls, if they won, and their current/initial bank balances.
* Returns: Nothing
* Preconditions: All of the above variables were input and the function is called.
* Postconditions: A message is displayed to the user.
*/

void chatter_messages(int number_rolls, int win_loss, double initial_bank_balance, double current_bank_balance) {
    if (initial_bank_balance > current_bank_balance && number_rolls == 1) {
        printf("\nWow!.. Not a great start huh?");
    }

    if (initial_bank_balance < current_bank_balance) {
        printf("\nDang... You trying to steal our money huh?");
    }

    if (number_rolls != 1 && win_loss == 0 && initial_bank_balance > current_bank_balance)
        {
            printf("\nThis is getting sad...");
        }

    if (number_rolls == 1 && current_bank_balance == 0) {
       printf("\nHow did that even happen???");
    }



}

/*
* Function: is_win_loss_or_point()
* Description: Determines the outcome of the first roll.
* Input parameters: The sum of the rolls.
* Returns: If the user won, lost, or continues to play: 1,0,-1
* Preconditions: The dice were added together and input when the function is called
* Postconditions: The outcome is returned.
*/

int is_win_loss_or_point(int sum_dice){
    if (sum_dice == 7 || sum_dice == 11) {
        return 1;
    }
    if (sum_dice == 2 || sum_dice == 3 || sum_dice == 12) {
        return 0;
    }
    if (sum_dice == 4 || sum_dice == 5 || sum_dice == 6 || sum_dice == 8 || sum_dice == 9 || sum_dice == 10) {
        return -1;
    }
}

/*
* Function: adjust_bank_balance()
* Description: Manages the users bank balance.
* Input parameters: The bank balance, wager amount, and if they won or lost;
* Returns: New bank balance.
* Preconditions: The user has input a balance, wager, and a round has been played
* Postconditions: The balance is updated.
*/
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract) {
    if (add_or_subtract == 1) {
        return bank_balance + wager_amount;
    }
    if (add_or_subtract == 0) {
        return bank_balance - wager_amount;
    }
    else {
        return bank_balance;
    }
}

/*
* Function: is_point_loss_or_neither()
* Description: Determines the outcome of any round after the first.
* Input parameters: The sum of the rolls and the current point value.
* Returns: The outcome 1, 0 or -1, win, loss, or neither.
* Preconditions: It isnt the first round and the die have been rolled.
* Postconditions: The outcome of the roll is decided.
*/

int is_point_loss_or_neither(int sum_dice, int point_value) {
    if (sum_dice == point_value) {
        return 1;
    }
    if (sum_dice == 7) {
        return 0;
    }
    else {
        return -1;
    }
}

/*
* Function: check_wager_amount()
* Description: Checks to see if the wager is bigger than the balance.
* Input parameters: Wager and Balance
* Returns: 1,0: 1 if the wager is accepted and 0 if the wager is too big.
* Preconditions: The user input a wager and has a balance.
* Postconditions: The result is returned.
*/

int check_wager_amount(double wager, double balance) {
    if (wager <= balance) {
        return 1;
    }
    else if (wager == 0) {
        return 0;
    }
    else {
        return 0;
    }
}