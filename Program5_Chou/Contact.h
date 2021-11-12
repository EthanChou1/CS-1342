//
// Created by ethan on 11/9/2021.
//

#ifndef PROGRAM5_CHOU_CONTACT_H
#define PROGRAM5_CHOU_CONTACT_H
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

class Contact{

    // NOTE TO THE STUDENT
    // You may NOT add "Set" values to the Contact class
    // This is to force you to use link lists the correct way

public:

    Contact();

    Contact(int id, string name, string streetAddress, string city, string state, string zip, string phone);
    Contact(const Contact& contact);
    Contact& operator=(const Contact& originalContact);
    int GetID();
    void SetID(int id);
    Contact * GetNext();
    void SetNext(Contact * next);

    string GetName();
    string GetStreetAddress();
    string GetCity();
    string GetState();
    string GetZip();
    string GetPhone();

private:

    int id;
    string name;
    string streetAddress;
    string city;
    string state;
    string zip;
    string phone;
    Contact * next;

};
#endif //PROGRAM5_CHOU_CONTACT_H
