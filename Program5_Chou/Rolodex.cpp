//
// Created by ethan on 11/9/2021.
//
#include "Rolodex.h"
#include "Contact.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;
Rolodex::Rolodex(){
    // create a dummy Contact at the head of the Rolodex
    head = new Contact;
}

Rolodex::~Rolodex(){
    Contact * current = head;
    while(current != nullptr){
        Contact * next = current->GetNext();
        delete current;
        current = next;
    }
    head = nullptr;
}

int Rolodex::LoadFromFile(string filename){
    ifstream file(filename);

    if(!file.is_open()){
        return -1;
    }

    string line;
    int id = 1;
    Contact * current = head;

    // first line is header row
    getline(file, line);

    while(getline(file, line)){
        stringstream ss(line);
        string first_name, last_name, company_name, address;
        string city, county, state, zip, phone1, phone, email;

        getline(ss, first_name, ',');
        getline(ss, last_name, ',');
        getline(ss, company_name, ',');
        getline(ss, address, ',');
        getline(ss, city, ',');
        getline(ss, county, ',');
        getline(ss, state, ',');
        getline(ss, zip, ',');
        getline(ss, phone1, ',');
        getline(ss, phone, ',');
        getline(ss, email, ',');

        Contact * contact = new Contact(
                id,
                last_name + ", " + first_name,
                address,
                city,
                state,
                zip,
                phone);

        current->SetNext(contact);
        current = current->GetNext();
        id++;
    }

    file.close();

    return this->Length();
}

void Rolodex::AddContact(string name, string streetAddress, string city, string state, string zip, string phone){
    // find the last Contact in the Rolodex
    Contact * current = head->GetNext();
    Contact * previous = head;
    int maxID = 0;
    while(current != nullptr){
        if(current->GetID() > maxID){
            maxID = current->GetID();
        }
        previous = previous->GetNext();
        current = current->GetNext();
    }

    // instantiate new Contact
    previous->SetNext(new Contact(maxID + 1, name, streetAddress, city, state, zip, phone));
}

int Rolodex::Length(){
    Contact * current = head->GetNext();
    int length = 0;
    while(current != nullptr){
        length++;
        current = current->GetNext();
    }
    return length;
}

void Rolodex::DeleteContact(int id) {
    // TODO by student: complete the function below
    Contact * current = head;
    Contact * previous = new Contact;
    while(current->GetID() != id)
    {
        previous = current;
        current = current->GetNext();
    }
    previous->SetNext(current->GetNext());
    delete current;
}

int Rolodex::GetMaxID(){
    Contact * current = head->GetNext();
    int maxID = 0;
    while(current != nullptr){
        if(maxID < current->GetID()){
            maxID = current->GetID();
        }
        current = current->GetNext();
    }
    return maxID;
}

void Rolodex::DuplicateContact(int id){

    // Duplicate must utilize a copy constructor that you have added to the Contact class.
    // Take extra care that you are actually calling the copy constructor and you aren't
    // doing a shallow copy.

    // TODO by student: complete the function below
    Contact * current = head->GetNext();
    Contact * previous = head;
    int maxID = GetMaxID();
    while(current != nullptr){
        previous = previous->GetNext();
        current = current->GetNext();
    }
    Contact * newDuplicate = head->GetNext();
    while(newDuplicate != nullptr){
        if(id == newDuplicate->GetID()){
            break;
        }
        newDuplicate = newDuplicate->GetNext();
    }
    Contact temp;
    temp = *newDuplicate;
    temp.SetID(maxID + 1);
    previous->SetNext(new Contact(temp));
}

Contact * Rolodex::FindContactByID(int id){
    Contact * current = head->GetNext();
    while(current != nullptr){
        if(id == current->GetID()){
            return current;
        }
        current = current->GetNext();
    }
    return current;
}

bool Rolodex::IDExists(int id){
    Contact * current = head->GetNext();
    while(current != nullptr){
        if(id == current->GetID()){
            return true;
        }
        current = current->GetNext();
    }
    return false;
}

void Rolodex::UpdateContact(int id, string name, string streetAddress, string city, string state, string zip, string phone){

    // The update function must use an assignment operator overload
    // that you have added to the Contact class.
    // Take extra care that you are actually calling the assignment overload
    // and you aren't doing a shallow copy.
    // Be careful that you update the "next" pointer and ID appropriately.

    Contact * updatee = FindContactByID(id);
    Contact updator(updatee->GetID(), name, streetAddress, city, state, zip, phone);

    // TODO by student: complete the function below
    *updatee = updator;
}

void Rolodex::SortBy(Field field){

    // Try using the "PrintRolodex" function during your algorithm
    // to gauge whether or not your algorithm is treating the link
    // list as you would expect.

    // TODO by student: complete the function below
    switch(field)
    {
        case ID:
            for(Contact* first = head->GetNext(); first != nullptr; first = first->GetNext())
            {
                Contact *temp = head;
                for(Contact* second = first->GetNext(); second != nullptr; second = second->GetNext())
                {
                    if(first->GetID() > second->GetID())
                    {
                        *temp = *first;
                        temp->SetID(first->GetID());
                        *first = *second;
                        first->SetID((second->GetID()));
                        *second = *temp;
                        second->SetID(temp->GetID());
                    }
                }
            }
            break;
        case NAME:
            for(Contact* first = head->GetNext(); first != nullptr; first = first->GetNext())
            {
                Contact *temp = head;
                for(Contact* second = first->GetNext(); second != nullptr; second = second->GetNext())
                {
                    if(first->GetName() > second->GetName())
                    {
                        *temp = *first;
                        temp->SetID(first->GetID());
                        *first = *second;
                        first->SetID((second->GetID()));
                        *second = *temp;
                        second->SetID(temp->GetID());
                    }
                }
            }
            break;
        case CITY:
            for(Contact* first = head->GetNext(); first != nullptr; first = first->GetNext())
            {
                Contact *temp = head;
                for(Contact* second = first->GetNext(); second != nullptr; second = second->GetNext())
                {
                    if(first->GetCity() > second->GetCity())
                    {
                        *temp = *first;
                        temp->SetID(first->GetID());
                        *first = *second;
                        first->SetID((second->GetID()));
                        *second = *temp;
                        second->SetID(temp->GetID());
                    }
                }
            }
            break;
        case STATE:
            for(Contact* first = head->GetNext(); first != nullptr; first = first->GetNext())
            {
                Contact *temp = head;
                for(Contact* second = first->GetNext(); second != nullptr; second = second->GetNext())
                {
                    if(first->GetState() > second->GetState())
                    {
                        *temp = *first;
                        temp->SetID(first->GetID());
                        *first = *second;
                        first->SetID((second->GetID()));
                        *second = *temp;
                        second->SetID(temp->GetID());
                    }
                }
            }
            break;
        case ZIP:
            for(Contact* first = head->GetNext(); first != nullptr; first = first->GetNext())
            {
                Contact *temp = head;
                for(Contact* second = first->GetNext(); second != nullptr; second = second->GetNext())
                {
                    if(first->GetZip() > second->GetZip())
                    {
                        *temp = *first;
                        temp->SetID(first->GetID());
                        *first = *second;
                        first->SetID((second->GetID()));
                        *second = *temp;
                        second->SetID(temp->GetID());
                    }
                }
            }
            break;
    }
}

void Rolodex::PrintContact(Contact * contact){
    if(contact == nullptr) {
        cout << "NULLPTR" << endl;
        return;
    }
    if(contact == head){
        cout << "HEAD" << endl;
        return;
    }

    cout << setw(5) << contact->GetID();
    cout << setw(22) << contact->GetName();
    cout << setw(50) <<
         contact->GetStreetAddress() + ", " +
         contact->GetCity() + " " +
         contact->GetState() + " " +
         contact->GetZip();
    cout << setw(15) << contact->GetPhone();
    cout << endl;
}

void Rolodex::PrintRolodex(){
    Contact * current = head->GetNext();
    cout << setw(5) << "ID";
    cout << setw(22) << "Name";
    cout << setw(50) << "Address";
    cout << setw(15) << "Phone";
    cout << endl;
    cout << "----------------------------------------------";
    cout << "----------------------------------------------";
    cout << endl;
    while(current != nullptr){
        PrintContact(current);
        current = current->GetNext();
    }
}


