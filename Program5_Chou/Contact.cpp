//
// Created by ethan on 11/9/2021.
//
#include "Contact.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
Contact::Contact(){
    this->next = nullptr;
}

Contact::Contact(int id, string name, string streetAddress, string city, string state, string zip, string phone){
    this->id = id;
    this->name = name;
    this->streetAddress = streetAddress;
    this->city = city;
    this->state = state;
    this->zip = zip;
    this->phone = phone;
    this->next = nullptr;
}

Contact::Contact(const Contact& contact)
{
    this->id = contact.id;
    this->name = contact.name;
    this->streetAddress = contact.streetAddress;
    this->city = contact.city;
    this->state = contact.state;
    this->zip = contact.zip;
    this->phone = contact.phone;
    this->next = contact.next;
}

Contact& Contact::operator=(const Contact& updateContact)
{
    this->name = updateContact.name;
    this->streetAddress = updateContact.streetAddress;
    this->city = updateContact.city;
    this->state = updateContact.state;
    this->zip = updateContact.zip;
    this->phone = updateContact.phone;
    return* this;
}

int Contact::GetID(){ return id; }
void Contact::SetID(int id){ this->id = id; }

Contact * Contact::GetNext(){ return next; }
void Contact::SetNext(Contact * next){ this->next = next; }

string Contact::GetName(){ return name; }
string Contact::GetStreetAddress(){ return streetAddress; }
string Contact::GetCity(){ return city; }
string Contact::GetState(){ return state; }
string Contact::GetZip(){ return zip; }
string Contact::GetPhone(){ return phone; }