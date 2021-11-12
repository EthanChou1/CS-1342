#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "Contact.h"
#include "Rolodex.h"

using namespace std;



void DoAddContact(Rolodex * rolodex);
void DoDeleteContact(Rolodex * rolodex);
void DoDuplicateContact(Rolodex * rolodex);
void DoUpdateContact(Rolodex * rolodex);
void DoSortContact(Rolodex * rolodex);

int main() {

    string filename;
    cout << "Enter Rolodex Filename: ";
    cin >> filename;

    Rolodex * rolodex = new Rolodex;

    int contactCount = rolodex->LoadFromFile(filename);

    if(contactCount < 0){
        cout << "Unable to open file" << endl;
        return -1;
    }
    else{
        cout << "Retrieved " << contactCount << " contacts from file" << endl;
    }

    bool exit = false;
    do{
        cout << endl;
        cout << "What would you like to do?" << endl;
        cout << "   1) Print Rolodex" << endl;
        cout << "   2) Add A Contact" << endl;
        cout << "   3) Delete A Contact" << endl;
        cout << "   4) Duplicate A Contact" << endl;
        cout << "   5) Update A Contact" << endl;
        cout << "   6) Sort Rolodex" << endl;
        cout << "   7) Exit" << endl;
        cout << "Selection: ";
        int choice;
        cin >> choice;
        cout << endl;

        switch(choice){
            case 1:
                rolodex->PrintRolodex();
                break;
            case 2:
                DoAddContact(rolodex);
                break;
            case 3:
                DoDeleteContact(rolodex);
                break;
            case 4:
                DoDuplicateContact(rolodex);
                break;
            case 5:
                DoUpdateContact(rolodex);
                break;
            case 6:
                DoSortContact(rolodex);
                break;
            case 7:
                exit = true;
                break;
            default:
                cout << "Invalid Entry... Try again..." << endl;
        }

    }while(!exit);

    delete rolodex;

    return 0;
}

void DoAddContact(Rolodex * rolodex){
    string name;
    string streetAddress;
    string city;
    string state;
    string zip;
    string phone;

    cin.ignore();

    cout << "Enter Name          : ";
    getline(cin, name);
    cout << "Enter Street Address: ";
    getline(cin, streetAddress);
    cout << "Enter City          : ";
    getline(cin, city);
    cout << "Enter State         : ";
    getline(cin, state);
    cout << "Enter Zip           : ";
    getline(cin, zip);
    cout << "Enter Phone         : ";
    getline(cin, phone);

    rolodex->AddContact(name, streetAddress, city, state, zip, phone);
}

void DoDeleteContact(Rolodex * rolodex){
    int id;
    cout << "Delete which ID? ";
    cin >> id;
    rolodex->DeleteContact(id);
}

void DoDuplicateContact(Rolodex * rolodex){
    int id;
    cout << "Duplicate which ID? ";
    cin >> id;
    rolodex->DuplicateContact(id);
}

void DoUpdateContact(Rolodex * rolodex){
    cout << "Which ID do you want to update? ";
    int id;
    cin >> id;

    if(!rolodex->IDExists(id)){
        cout << "ID does not exist in rolodex." << endl;
        return;
    }

    string name;
    string streetAddress;
    string city;
    string state;
    string zip;
    string phone;

    cin.ignore();

    cout << "Enter Name          : ";
    getline(cin, name);
    cout << "Enter Street Address: ";
    getline(cin, streetAddress);
    cout << "Enter City          : ";
    getline(cin, city);
    cout << "Enter State         : ";
    getline(cin, state);
    cout << "Enter Zip           : ";
    getline(cin, zip);
    cout << "Enter Phone         : ";
    getline(cin, phone);

    rolodex->UpdateContact(id, name, streetAddress, city, state, zip, phone);
}

void DoSortContact(Rolodex * rolodex){
    bool error;
    do{
        error = false;

        cout << "What would you like to sort by?" << endl;
        cout << "   1) ID" << endl;
        cout << "   2) NAME" << endl;
        cout << "   3) CITY" << endl;
        cout << "   4) STATE" << endl;
        cout << "   5) ZIP" << endl;
        cout << "Selection: ";
        int choice;
        cin >> choice;
        cout << endl;

        switch(choice){
            case 1:
                rolodex->SortBy(ID);
                break;
            case 2:
                rolodex->SortBy(NAME);
                break;
            case 3:
                rolodex->SortBy(CITY);
                break;
            case 4:
                rolodex->SortBy(STATE);
                break;
            case 5:
                rolodex->SortBy(ZIP);
                break;
            default:
                cout << "Invalid Entry... Try again..." << endl;
                error = true;
        }
    }while(error);
}
