// Author: Christian Sylvester
// Group #: 45
// Due Date: September 16th, 2014
// Programming Assignment Number: 3
// CS1428.001
// Instructor: Husain Gholoom
/* This program demonstrates a capability
 * with basic arithmetic operators. */

#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "This program is written by Christian Sylvester" << endl;
    cout << endl;
    cout << "The function of this program is to prompt the user to input an integer value" << endl;
    cout << "that represents a person's age. The program then calculates and displays " << endl;
    cout << "statistics about the person's age." << endl;
    cout << endl;
    cout << "Enter your age:" << endl;
    cin >> a;
    cout << "You entered: " << a << endl;
    cout << endl;
    int b = a*12;
    double c = a*365.25;
    double d = c*24;
    double e = d*60*60;
    cout << "You are " << b << " months old and " << c << " days old." << endl;
    cout << "You are approximately " << d << " hours old." << endl;
    cout << "You are approximately " << e << " seconds old." << endl;
    return 0;
}
