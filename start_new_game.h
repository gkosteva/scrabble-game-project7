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
* <file with functionality for starting the game>
*
*/

#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include "screenClear.h"

using namespace std;

const int MAX = 26;
string printRandomString(int n)
{
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };

    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];

    return res;
}
void fillArrayOfSelectedLetters(char lettersArray[], string letters)
{
    for (int i = 0; i < letters.length(); i++)
    {
        lettersArray[i] = letters[i];
    }
}


bool check_If_PlayerWord_Consist_Of_Given_Letters(string letters, string playersWord)
{
    string copyLetters = letters;
    bool isLetterValid = false;
    for (int i = 0; i < playersWord.length(); i++)
    {
        char currentLetter = playersWord[i];
        for (int j = 0; j < copyLetters.size(); j++)
        {
            if (copyLetters[j] == currentLetter)
            {
                isLetterValid = true;
                copyLetters[j] = '0';
                break;
            }
        }
        if (!isLetterValid)
            return false;
        isLetterValid = false;
    }
    return true;
}

bool does_playerWord_Exist_In_File(string playersWord)
{
    bool doesWordExistInfiles = false;
    char firstLetter = playersWord[0];
    fstream wordsFiles;
    switch (firstLetter)
    {
    case 'a': wordsFiles.open("letterA.txt", fstream::in); break;
    case 'b': wordsFiles.open("letterB.txt", fstream::in); break;
    case 'c': wordsFiles.open("letterC.txt", fstream::in); break;
    case 'd': wordsFiles.open("letterD.txt", fstream::in); break;
    case 'e': wordsFiles.open("letterE.txt", fstream::in); break;
    case 'f': wordsFiles.open("letterF.txt", fstream::in); break;
    case 'g': wordsFiles.open("letterG.txt", fstream::in); break;
    case 'h': wordsFiles.open("letterH.txt", fstream::in); break;
    case 'i': wordsFiles.open("letterI.txt", fstream::in); break;
    case 'j': wordsFiles.open("letterJ.txt", fstream::in); break;
    case 'k': wordsFiles.open("letterK.txt", fstream::in); break;
    case 'l': wordsFiles.open("letterL.txt", fstream::in); break;
    case 'm': wordsFiles.open("letterM.txt", fstream::in); break;
    case 'n': wordsFiles.open("letterN.txt", fstream::in); break;
    case 'o': wordsFiles.open("letterO.txt", fstream::in); break;
    case 'p': wordsFiles.open("letterP.txt", fstream::in); break;
    case 'q': wordsFiles.open("letterQ.txt", fstream::in); break;
    case 'r': wordsFiles.open("letterR.txt", fstream::in); break;
    case 's': wordsFiles.open("letterS.txt", fstream::in); break;
    case 't': wordsFiles.open("letterT.txt", fstream::in); break;
    case 'u': wordsFiles.open("letterU.txt", fstream::in); break;
    case 'v': wordsFiles.open("letterV.txt", fstream::in); break;
    case 'w': wordsFiles.open("letterW.txt", fstream::in); break;
    case 'x': wordsFiles.open("letterX.txt", fstream::in); break;
    case 'y': wordsFiles.open("letterY.txt", fstream::in); break;
    case 'z': wordsFiles.open("letterZ.txt", fstream::in); break;
    default:
        break;
    }
    if (wordsFiles.is_open())
    {
        string buffer;
        while (getline(wordsFiles, buffer))
        {
            if (playersWord == buffer)
            {
                wordsFiles.close();
                return true;
            }
        }
    }
    wordsFiles.close();
    return false;
}
void check_If_PlayerWord_Is_Valid(string letters, string playersWord, int& playersScore, bool& isWordCorrect)
{
    if (check_If_PlayerWord_Consist_Of_Given_Letters(letters, playersWord))
    {
        if (does_playerWord_Exist_In_File(playersWord))
        {
            playersScore += playersWord.length();
            isWordCorrect = true;
        }
        else
        {
            cout << "ERROR: Invalid Word! ";
            isWordCorrect = false;
        }
    }
    else
    {
        cout << "ERROR: Invalid Word! ";
        isWordCorrect = false;
    }
}
bool is_Word_Already_Written(string playerWord, vector<string> writtenWords)
{
    for (int i = 0; i < writtenWords.size(); i++)
    {
        if (writtenWords[i] == playerWord)
        {
            return 1;
        }
    }
    return 0;
}
void start_new_game(int numOfLetters, string letters, string playerWord, int playerScore, int maxTriesInRound, int numOfRounds, int maxLetterChanges)
{
    vector<string> writtenWords = {};

    bool isMaxLetterSchuffleReached = false;
    bool isWordCorrect = false;
    int rounds = 1;
    int triesInRound = maxTriesInRound;

    while (numOfRounds > 0)
    {
        cout << "Round " << rounds;
        rounds++;
        letters = printRandomString(numOfLetters);
        cout << " Available letters: " << letters << endl;
        while (triesInRound > 0)
        {
            cout << "Enter your word or type 0 for new letters: ";
            cin >> playerWord;
            if (playerWord == "0")
            {
                if (maxLetterChanges <= 0)
                {
                    cout << "No more possible changes for letters!" << endl;
                    cout << "You lost!" << endl;
                    cout << "Your final score is: " << playerScore << endl;
                    isMaxLetterSchuffleReached = true;
                    break;
                }
                while (playerWord == "0" && maxLetterChanges > 0)
                {
                    writtenWords.clear();
                    maxLetterChanges--;
                    cout << "Possible changes for letters for the game: " << maxLetterChanges << endl;
                    letters = printRandomString(numOfLetters);
                    cout << "New letters are: ";
                    cout << letters << endl;
                    cout << "Enter your word or type 0 for new letters: ";
                    cin >> playerWord;
                    if (playerWord == "0" && maxLetterChanges <= 0)
                    {
                        cout << "No more possible changes for letters!" << endl;
                        cout << "You lost!" << endl;
                        cout << "Your final score is: " << playerScore << endl;
                        isMaxLetterSchuffleReached = true;
                        break;
                    }
                }
            }
            if (isMaxLetterSchuffleReached)
                break;
            if (is_Word_Already_Written(playerWord, writtenWords))
            {
                cout << "You have already written this word!" << endl;
                triesInRound--;
                continue;
            }
            else
            {
                writtenWords.push_back(playerWord);
            }
            check_If_PlayerWord_Is_Valid(letters, playerWord, playerScore, isWordCorrect);
            if (isWordCorrect)
            {
                cout << "Your score so far: " << playerScore << endl;
                cout << "Remaining tries for this round: " << triesInRound - 1 << endl;
            }
            else
            {
                cout << "Remaining tries for this round: " << triesInRound - 1 << endl;
            }
            triesInRound--;
        }
        if (isMaxLetterSchuffleReached)
        {
            break;
        }
        writtenWords.clear();
        screenClear();
        numOfRounds--;
        if (numOfRounds <= 0)
        {
            break;
        }
        cout << "Your score so far: " << playerScore << endl;
        triesInRound = maxTriesInRound;        
    }
    if (!isMaxLetterSchuffleReached)
    {
        cout << "Congratulations!" << endl;
        cout << "Your final score is: " << playerScore << endl;
    }
}