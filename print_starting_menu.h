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
* <file for printing the main page>
*
*/

#pragma once
#include<iostream>
using namespace std;
void pringScrabbleLogo()
{
    cout << "\n";
    cout << string(10, ' ') << "*******    ********   ********               **            *******        *******      **          ****** " << endl;
    cout << string(8, ' ') << "**          **         **        **          **  **         **      **     **      **    **         **  " << endl;
    cout << string(8, ' ') << "**          **         **        **         **    **        **       **    **       **   **         ** " << endl;
    cout << string(9, ' ') << "**         **         **       **         **      **       **      **     **      **    **         **" << endl;
    cout << string(10, ' ') << "******    **         *********          ************      ********       ********      **          *******" << endl;
    cout << string(14, ' ') << "  **  **         **      **        **          **     **       **    **      **    **         ** " << endl;
    cout << string(14, ' ') << "  **  **         **       **      **            **    **        **   **       **   **         **" << endl;
    cout << string(13, ' ') << "  **   **         **        **    **              **   **        **   **       **   **         **" << endl;
    cout << string(9, ' ') << "*******     ********  **         **  **                **  **********     *********     *********    ******" << endl;
}
void printStartingMenu()
{
    cout << "\n";
    cout << string(30, ' ');
    cout << string(60, '_') << endl;
    cout << string(29, ' ') << '|' << string(60, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(21, ' ') << "1. START NEW GAME" << string(22, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(24, ' ') << "2. SETTINGS" << string(25, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(21, ' ') << "3. ENTER NEW WORD" << string(22, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(24, ' ') << "4. EXIT" << string(29, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(60, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(60, '_') << '|' << endl;
    cout << "\n";
    cout << "Enter your option: ";
}

void printMenuForSettings()
{
    cout << "\n";
    cout << string(30, ' ');
    cout << string(60, '_') << endl;
    cout << string(29, ' ') << '|' << string(60, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(15, ' ') << "2. SETTINGS" << string(34, ' ') << '|' << endl;
    cout << string(29, ' ') << "|" << string(16, ' ') << "a. change number of given letters" << string(11, ' ') << '|' << endl;
    cout << string(29, ' ') << "|" << string(16, ' ') << "b. change number of given rounds" << string(12, ' ') << '|' << endl;
    cout << string(29, ' ') << "|" << string(16, ' ') << "c. change number of shuffle of given letters" << string(0, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(60, ' ') << '|' << endl;
    cout << string(29, ' ') << '|' << string(60, '_') << '|' << endl;
    cout << endl;
    cout << "Enter 'a' for option a, 'b' for option b, 'c' for option c: ";
}