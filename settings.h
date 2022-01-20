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
* <file for changing settings int the game>
*
*/

#pragma once
#include<iostream>
#include "print_starting_menu.h"
#include "screenClear.h"
using namespace std;

void change_settings(int& numOfLetters,int& numOfRounds, int& numOfChangeLetters)
{
    char settingsOption;
    int newNumForLetters;
    int newNumOfRounds;
    while (true)
    {
        printMenuForSettings();
        cin >> settingsOption;
        if (settingsOption == 'a')
        {
            int newNumForLetters;
            cout << "enter number of letters: ";
            cin >> newNumForLetters;
            numOfLetters = newNumForLetters;
        }
        else if (settingsOption == 'b')
        {
            int newNumOfRounds;
            cout << "enter number of rounds: ";
            cin >> newNumOfRounds;
            numOfRounds = newNumOfRounds;
        }
        else if (settingsOption == 'c')
        {
            int newNumForChangeLetters;
            cout << "enter number of shuffle for letters: ";
            cin >> newNumForChangeLetters;
            numOfChangeLetters = newNumForChangeLetters;
        }
        else
        {
            cout << "Invalid option!";
            screenClear();
            continue;
        }
        cout << "Would you like to change other setting? y/n" << endl;
        cin >> settingsOption;
        while (settingsOption != 'n' && settingsOption != 'y')
        {
            cout << "Invalid option!";
            cout << "Would you like to change other setting? y/n" << endl;
            cin >> settingsOption;
        }
        if (settingsOption == 'y')
        {
            screenClear();
            continue;
        }
        else
            break;
    }
    
}


