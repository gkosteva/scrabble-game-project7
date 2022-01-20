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
* <file for adding new word>
*
*/

#pragma once
#include<iostream>
#include<fstream>

using namespace std;

void add_newWord_to_file()
{
    string newWord;
    cout << "Enter a word you want to add: ";
    cin >> newWord;
    char firstLetter = newWord[0];
    fstream wordsFiles;
    switch (firstLetter)
    {
    case 'a': wordsFiles.open("letterA.txt", fstream::app); break;
    case 'b': wordsFiles.open("letterB.txt", fstream::app); break;
    case 'c': wordsFiles.open("letterC.txt", fstream::app); break;
    case 'd': wordsFiles.open("letterD.txt", fstream::app); break;
    case 'e': wordsFiles.open("letterE.txt", fstream::app); break;
    case 'f': wordsFiles.open("letterF.txt", fstream::app); break;
    case 'g': wordsFiles.open("letterG.txt", fstream::app); break;
    case 'h': wordsFiles.open("letterH.txt", fstream::app); break;
    case 'i': wordsFiles.open("letterI.txt", fstream::app); break;
    case 'j': wordsFiles.open("letterJ.txt", fstream::app); break;
    case 'k': wordsFiles.open("letterK.txt", fstream::app); break;
    case 'l': wordsFiles.open("letterL.txt", fstream::app); break;
    case 'm': wordsFiles.open("letterM.txt", fstream::app); break;
    case 'n': wordsFiles.open("letterN.txt", fstream::app); break;
    case 'o': wordsFiles.open("letterO.txt", fstream::app); break;
    case 'p': wordsFiles.open("letterP.txt", fstream::app); break;
    case 'q': wordsFiles.open("letterQ.txt", fstream::app); break;
    case 'r': wordsFiles.open("letterR.txt", fstream::app); break;
    case 's': wordsFiles.open("letterS.txt", fstream::app); break;
    case 't': wordsFiles.open("letterT.txt", fstream::app); break;
    case 'u': wordsFiles.open("letterU.txt", fstream::app); break;
    case 'v': wordsFiles.open("letterV.txt", fstream::app); break;
    case 'w': wordsFiles.open("letterW.txt", fstream::app); break;
    case 'x': wordsFiles.open("letterX.txt", fstream::app); break;
    case 'y': wordsFiles.open("letterY.txt", fstream::app); break;
    case 'z': wordsFiles.open("letterZ.txt", fstream::app); break;
    default:
        break;
    }
    if (wordsFiles.is_open())
    {
        wordsFiles << '\n';
        wordsFiles << newWord;
    }
    wordsFiles.close();
}
