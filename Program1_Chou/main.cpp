#include <iostream>

using namespace std;

int main() {
    int userInput;
    string userString;
    int userInt;
    int userInt2;
    int reverseInt = 0;
    int counter;
    bool isPrime;

    cout << "Welcome to Program 1!" << endl << endl;
    cout << "What would you like to do?" << endl;
    cout << "1) Check if the reverse of an integer is greater" << endl;
    cout << "2) Find prime numbers less than or equal to an integer" << endl;

    cin >> userInput;
    cout << "Choice: " << userInput << endl;
    do
    {
        if (userInput == 1)
        {
            cout << "You chose " << userInput << ", check if the reverse of an integer is greater." << endl << endl;
            cout << "Enter an integer: ";
            cin >> userInt;
            userInt2 = userInt;
            cout << "You entered: " << userInt << endl;
            // This while loop takes the user input and reverses it
            // then outputs the result and compares it
            while ( userInt2 != 0)
            {
                counter = userInt2 % 10;
                reverseInt = reverseInt * 10 + counter;
                userInt2 /= 10;
            }
            cout << "The reverse is: " << reverseInt << endl;
            if (reverseInt < userInt)
            {
                cout << "The reverse is less than your number" << endl;
            }
            else if (reverseInt > userInt)
            {
                cout << "The reverse is greater than your number" << endl;
            }
            else
            {
                cout << "The reverse is equal to your number" << endl;
            }
            cout << endl;
            reverseInt = 0;
        }
        else if (userInput == 2)
        {
            cout << "You chose " << userInput << ", find prime numbers less than or equal to an integer.";
            cout << endl;
            cout << "Enter an integer greater than 2: ";
            cin >> userInt;
            cout << endl;
            cout << "You entered: " << userInt << endl;
            cout << "Looping from 2 to your number..." << endl;
            // This for loop starts from 2 and ends at the user number
            // and outputs the numbers that are prime in between
            if(userInt < 2)
            {
                cout << "You did not enter a valid number" << endl;
            }
            else
            {
                for (int i = 2; i <= userInt; i++)
                {
                    isPrime = true;
                    for( int j = 2; j*j <= i; j++)
                    {
                        if( i % j == 0)
                        {
                            isPrime = false;
                            break;
                        }
                    }
                    if(isPrime)
                    {
                        cout << i << " is prime." << endl;
                    }
                }
            }
            cout << endl;
        }
        else
        {
            cout << "You did not enter a valid number." <<  endl << endl;
        }
        cout << "Would you like to continue (enter 'yes', 'y', 'no', or 'n'): ";
        cin >> userString;
        cout << endl;
        if(userString == "no" || userString == "n")
        {
            return 0;
        }
        else if (userString == "yes" || userString == "y")
        {
            cout << "What would you like to do?" << endl;
            cout << "1) Check if the reverse of an integer is greater" << endl;
            cout << "2) Find prime numbers less than or equal to an integer" << endl;

            cin >> userInput;
            cout << "Choice: " << userInput << endl;
        }
        else
        {
            do
            {
                cout << "You did not enter valid input. You entered: " << userString << endl;
                cout << "Would you like to continue (enter 'yes', 'y', 'no', or 'n'): ";
                cin >> userString;
                cout << endl;
                if(userString == "yes" || userString == "y")
                {
                    cout << "What would you like to do?" << endl;
                    cout << "1) Check if the reverse of an integer is greater" << endl;
                    cout << "2) Find prime numbers less than or equal to an integer" << endl;

                    cin >> userInput;
                    cout << "Choice: " << userInput << endl;
                    break;
                }
                else if (userString == "no" || userString == "n")
                {
                    return 0;
                }
            }while (userString != "yes" || userString != "y" || userString != "no" || userString != "n");
        }
    }while(userString == "yes" || userString == "y");
    cout << endl;
    return 0;
}