//
// Created by ethan on 9/14/2021.
//
#include <iostream>
#include <cctype>
#include <string>
#include "Function.h"

using namespace std;

enum Key {cipherKey = 65, alphabetIndex = 26};
Key cipher = cipherKey;
Key alphabetNumTotal = alphabetIndex;

/**
 * Encrypts a single char by turning a
 * single char of the passcode into a 0-25 int,
 * and adding it to the original char
 * @param origChar
 * @param charCode
 * @return a new char
 */
char encryptSingleChar(char origChar, char charCode)
{
    int charNum = (int)(origChar - cipher);
    int moveChar = (int)(charCode - cipher);
    int shift = (charNum + moveChar) % alphabetNumTotal;
    char newChar = (char)(shift + cipher);
    return newChar;
}

/** Decrypts a single char by turning a
 * single char of the passcode into a 0-25 int,
 * and subtracting it to the original char
 * @param origChar
 * @param charCode
 * @return a new char
 */
char decryptSingleChar(char origChar, char charCode)
{
    int charNum = (int)(origChar - cipher);
    int moveChar = (int)(charCode - cipher);
    int shift = (alphabetNumTotal + charNum - moveChar) % alphabetNumTotal;
    char newChar = (char)(shift + cipher);
    return newChar;
}

/**
 * Decrypts an uppercase string.
 * @param message
 * @param passcode
 * @return decrypted text
 */
string decryptString(string& message, string& passcode)
{
    string cipherText = message;
    int count = 0;
    for (char& letter : cipherText)
    {
        if (isalpha(letter))
        {
            letter = decryptSingleChar(letter, passcode.at(count));
            if(count < passcode.length() - 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
        }
    }
    return cipherText;
}

/**
 * Encrypts an uppercase string.
 * @param message
 * @param passcode
 * @return encrypted text
 */
string encryptString(string& message, string& passcode)
{
    string cipherText = message;
    int count = 0;
    for (char& letter : cipherText)
    {
        if (isalpha(letter))
        {
            letter = encryptSingleChar(letter, passcode.at(count));
            if(count < passcode.length() - 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
        }
    }
    return cipherText;
}

/**
 * Checks for a valid password.
 * @param check
 * @return validPassword
 */
string checkPassword(string& checkPassword)
{
    string validPassword;
    for(char digit : checkPassword)
    {
        if(isalpha(digit))
        {
            validPassword += (char)(toupper(digit));
        }
    }
    return validPassword;
}

/**
 * Capitalizes the message.
 * @param checkMessage
 * @return messageCapital
 */
string checkMessage(string& checkMessage)
{
    string messageCapital;
    for(char digit : checkMessage)
    {
        messageCapital += (char)(toupper(digit));
    }
    return messageCapital;
}

/**
 * Encrypts the message.
 * Gets user input and checks validity
 * of both passcode and message.
 */
void encryptFunction()
{
    string passcode;
    string message;
    string encrypt;

    cout << "Enter your passcode: ";
    cin >> passcode;
    passcode = checkPassword(passcode);
    cout << "Enter your message: ";
    cin.ignore();
    getline(cin, message);
    message = checkMessage(message);
    cout << "Encrypting your message..." << endl << endl;
    encrypt = encryptString(message, passcode);

    cout << "Passcode: " << passcode << endl;
    cout << "Plaintext: " << message << endl;
    cout << "Ciphertext: " << encrypt << endl;
}

/**
 * Decrypts the message.
 * Gets user input and checks validity
 * of both passcode and message.
 */
void decryptFunction()
{
    string passcode;
    string message;
    string decrypt;

    cout << "Enter your ciphertext: ";
    cin.ignore();
    getline(cin, message);
    cout << "Enter your passcode: ";
    cin >> passcode;
    passcode = checkPassword(passcode);
    message = checkMessage(message);
    cout << "Decrypting your message..." << endl << endl;
    decrypt = decryptString(message, passcode);

    cout << "Passcode: " << passcode << endl;
    cout << "Ciphertext: " << message << endl;
    cout << "Plaintext: " << decrypt << endl;
}


/**
 * Main menu
 */
void mainMenu()
{
    string userInput;
    bool loop;
    //Main Menu
    cout << "Welcome to the SMU Encryption Engine!" << endl << endl;
    cout << "Please enter a command: " << endl;
    cout << "1. ENCRYPT" << endl << "2. DECRYPT" << endl << "3. QUIT" << endl << "Enter: ";

    loop = true;
    do {
        cin >> userInput;
        if(userInput == "ENCRYPT")
        {
            cout << "User enters: " << userInput << endl << endl;
            encryptFunction();
            cout << endl << "Please enter a command: " << endl;
            cout << "1. ENCRYPT" << endl << "2. DECRYPT" << endl << "3. QUIT" << endl << "Enter: ";
        }
        else if(userInput == "DECRYPT")
        {
            cout << "User enters: " << userInput << endl << endl;
            decryptFunction();
            cout << endl << "Please enter a command: " << endl;
            cout << "1. ENCRYPT" << endl << "2. DECRYPT" << endl << "3. QUIT" << endl << "Enter: ";
        }
        else if(userInput == "QUIT")
        {
            cout << endl << "Goodbye!" << endl;
            loop = false;
        }
        else
        {
            cout << userInput << " is not a valid command. Please enter one of ENCRYPT/DECRYPT/QUIT" << endl;
            cout << "Please enter a command: ";
        }
    }while(loop);
}