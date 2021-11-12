#include <iostream>
#include "FirstFirework.h"
#include "SecondFirework.h"
#include "ThirdFirework.h"
#include "FourthFirework.h"
#include "OtherFunctions.h"

using namespace std;

int main() {

    bool loop = true;
    string input;
    cout << "Do you want to see fireworks? (y|n)";
    cin >> input;
    do {
    if(input == "y" || input == "Y")
    {
        //declares a 2d dynamically allocated array
        char** array = arrayCreator();

        secondFireworkBuffer(array);
        fourthFireworkBuffer(array);
        //These fireworks are smaller, so they go last
        //and they don't get covered up by the bigger fireworks.
        firstFireworkBuffer(array);
        thirdFireworkBuffer(array);

        arrayDisplayAndDeallocate(array);
        cout << endl;

        cout << "Do you want to see fireworks? (y|n)";
        cin >> input;
        if(input == "n" || input == "N")
        {
            loop = false;
        }
        else if(input == "y" || input == "Y")
        {
            continue;
        }
        else
        {
            cout << "You did not choose a valid option, please try again" << endl;
            cout << "Do you want to see fireworks? (y|n)";
            cin >> input;
        }
    }
    else if (input == "n" || input == "N")
    {
        return 0;
    }
    else
    {
        cout << "You did not choose a valid option, please try again" << endl;
        cout << "Do you want to see fireworks? (y|n)";
        cin >> input;
    }
    }while(loop);
    return 0;
}
