/**
*
* Solution to course project # 7
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Gabriela Kosteva
* @idnumber 8MI0600092
* @compiler VC
*
* <file wiith main functionality>
*
*/


#include <iostream>
#include<string>
#include<vector>
#include<fstream>
#include "print_starting_menu.h"
#include "start_new_game.h"
#include "settings.h"
#include "add_new_word.h"

using namespace std;

int main()
{
    srand(time(NULL));
    int option;
    int numOfLetters = 10;
    string letters = " ";
    int playersScore = 0;
    string playersWord;

    int numOfMaxTriesInRound = 3;
    int numOfRounds = 5;
    int numOfMaxLettersChange = 2;

    bool isWordCorrect = false;
    while (true)
    {
        char key;
        system("Color 09");
        pringScrabbleLogo();
        printStartingMenu();
        cin >> option;
        switch (option)
        {
        case 1: {
            screenClear();
            system("Color 0F");
            start_new_game(numOfLetters, letters, playersWord, playersScore, numOfMaxTriesInRound, numOfRounds, numOfMaxLettersChange);
            cout << "Press any key and enter to go back to the menu: ";
            cin >> key;
            screenClear();
            continue;
        } break;
        case 2: {            
            screenClear();
            system("Color 0F");
            change_settings(numOfLetters, numOfRounds,numOfMaxLettersChange);
            screenClear();
            continue;
        } break;
        case 3: {            
            screenClear();
            system("Color 0F");
            add_newWord_to_file();
            screenClear();
            continue;        
        }
        case 4: exit(10); break;
        default: screenClear();
            continue; break;
        }
    }

    return 0;
}

