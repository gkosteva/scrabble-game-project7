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
* <file for clearing the screen>
*
*/

#pragma once
#include<iostream>
using namespace std;
void screenClear()
{
#ifdef _WIN32
    system("cls");
#elif __linux__
    system("clear");
#else
    for (int i = 0; i <= 200; ++i)
    {
        cout << endl;
    }
#endif
}