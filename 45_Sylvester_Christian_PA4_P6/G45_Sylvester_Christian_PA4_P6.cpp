// Author: Christian Sylvester
// Group Number: 45
// Instructor: Husain Gholoom
// Assignment Number: 6
// Class: CS1428.001
// Due: October 2, 2014

#include <iostream>

using namespace std;

int main()
{
    char gender;        // Begin variable declaration
    char activity;      // Only three variables are needed
    int weight;

    cout << "This program was written by Christian Sylvester" << endl << endl;
    cout << "The function of this program is to display the number of daily calories needed to" << endl;
    cout << "maintain your current weight. The number of calories is based on your gender," << endl;
    cout << "activity level, and weight." << endl << endl;

    cout << "Enter your gender (F for female and M for male): " << endl;
    cin >> gender;

    switch (gender)            // Begin switch statements at gender
    {
    case 'F':                  // Begin case for females
        cout << "Enter your activity level (I for inactive and A for active):" << endl;
        cin >> activity;

        switch (activity)      // Nested switch statement for activity
        {
        case 'I':
            cout << "Enter your weight in pounds:" << endl;
            cin >> weight;
            cout << "Number of calories needed to maintain your weight: " << (10*weight) << endl;
            return 1;
        case 'A':
            cout << "Enter your weight in pounds:" << endl;
            cin >> weight;
            cout << "Number of calories needed to maintain your weight: " << (12*weight) << endl;
            return 1;
        default:
            cout << activity << " is not a valid activity code." << endl;
        }
    case 'M':                 // Begin case for males
        cout << "Enter your activity level (I for inactive and A for active):" << endl;
        cin >> activity;

        switch (activity)     // Nested switch statement for activity choices
        {
        case 'I':
            cout << "Enter your weight in pounds:" << endl;
            cin >> weight;
            cout << "Number of calories needed to maintain your weight: " << (13*weight) << endl;
            return 1;
        case 'A':
            cout << "Enter your weight in pounds:" << endl;
            cin >> weight;
            cout << "Number of calories needed to maintain your weight: " << (15*weight) << endl;
            return 1;
        default:
            cout << activity << " is not a valid activity code." << endl;
        }
        break;
    default:
        cout << gender << " is an invalid gender code." << endl;
    }
    return 0;
}
