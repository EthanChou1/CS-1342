//
// Created by ethan on 11/9/2021.
//
#include "Contact.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#ifndef PROGRAM5_CHOU_ROLODEX_H
#define PROGRAM5_CHOU_ROLODEX_H
enum Field {ID, NAME, CITY, STATE, ZIP};
using namespace std;
class Rolodex{
public:

    Rolodex();

    ~Rolodex();

    int LoadFromFile(string filename);

    void AddContact(string name, string streetAddress, string city, string state, string zip, string phone);

    int Length();

    void DeleteContact(int id);

    int GetMaxID();

    void DuplicateContact(int id);

    Contact * FindContactByID(int id);

    bool IDExists(int id);

    void UpdateContact(int id, string name, string streetAddress, string city, string state, string zip, string phone);

    void SortBy(Field field);

    void PrintContact(Contact * contact);

    void PrintRolodex();


private:
    Contact * head;

};
#endif //PROGRAM5_CHOU_ROLODEX_H
