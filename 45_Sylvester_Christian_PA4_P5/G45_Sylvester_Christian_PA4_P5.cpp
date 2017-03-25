// Author: Christian Sylvester
// Group Number: 45
// Instructor: Husain Gholoom
// Assignment Number: 5
// Class: CS1428.001
// Due: October 2, 2014

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    char member_level;                          // Declare all variables
    const double points_rate1 = 0.05;
    const double points_rate2 = 0.06;
    const double points_rate3 = 0.075;
    const double points_rate4 = 0.1;
    const double points_rate5 = 0.13;
    const double points_rate6 = 0.04;
    const double points_rate7 = 0.15;

    cout << "This program was written by Christian Sylvester" << endl << endl;
    cout << "The function of this program is to display how many reward points a customer" << endl;
    cout << "earns each month." << endl << endl;

    cout << "Enter S for the Standard Membership Type or" << endl;
    cout << "Enter P for the Premium Level membership or" << endl;
    cout << "Enter G for the Gold Level membership:" << endl;

    cin >> member_level;

    if (member_level == 'S')      // Break if statements down by S, P, and G
    {
        double purchases;         // Declare the variable purchases in each scope

        cout << "Please enter your total monthly purchases:" << endl;
        cin >> purchases;

        if (purchases < 75.00)    // Nested if statement further breaks down the choices
        {
            double points;
            points = (points_rate1*purchases);

            cout << "Number of reward points earned: " << setprecision(2) << fixed << points;
        }
        else if (purchases >= 75.00 || purchases <= 149.99 )
        {
            double points;
            points = (points_rate3*purchases);

            cout << "Number of reward points earned: " << setprecision(2) << fixed << points;
        }
        else if (purchases >= 150)
        {
            double points;
            points = (points_rate4*purchases);

            cout << "Number of reward points earned: " << setprecision(2) << fixed << points;
        }
    }
    else if (member_level == 'P')       // Begin if statement regarding P
    {
        double purchases;

        cout << "Please enter your total monthly purchases:" << endl;
        cin >> purchases;

        if (purchases < 150)
        {
            double points;
            points = (points_rate2*purchases);

            cout << "Number of reward points earned: " << setprecision(2) << fixed << points;
        }
        else if (purchases >= 150.00 )
        {
            double points;
            points = (points_rate5*purchases);

            cout << "Number of reward points earned: " << setprecision(2) << fixed << points;
        }
    }
    else if (member_level == 'G')        // Begin if statement regarding G
    {
        double purchases;

        cout << "Please enter your total monthly purchases:" << endl;
        cin >> purchases;

        if (purchases < 200.00)
        {
            double points;
            points = (points_rate6*purchases);

            cout << "Number of reward points earned: " << setprecision(2) << fixed << points;
        }
        else if (purchases >= 200.00 )
        {
            double points;
            points = (points_rate7*purchases);

            cout << "Number of reward points earned: " << setprecision(2) << fixed << points;
        }
    }
    else
    {
        cout << "Invalid input. Please try again with one of the proper characters." << endl;
    }
    return 0;
}
