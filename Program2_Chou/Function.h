//
// Created by ethan on 9/14/2021.
//
#include <iostream>
#include <cctype>
#include <string>
#ifndef PROGRAM2_CHOU_FUNCTION_H
#define PROGRAM2_CHOU_FUNCTION_H

char encryptSingleChar(char, char);
char decryptSingleChar(char, char);
std::string decryptString(std::string&, std::string&);
std::string encryptString(std::string&, std::string&);
std::string checkPassword(std::string&);
std::string checkMessage(std::string&);
void encryptFunction();
void decryptFunction();
void mainMenu();

#endif //PROGRAM2_CHOU_FUNCTION_H
