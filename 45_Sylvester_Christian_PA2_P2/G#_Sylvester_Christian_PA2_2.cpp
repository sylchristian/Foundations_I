// Author: Christian Sylvester
// Group Number: 45
// Due Date: September 16th, 2014
// Programming Assignment Number: 2
// CS1428.001
// Instructor: Husain Gholoom

/* This program serves to demonstrate competency with
 * input and output as well as using division and
 * modulus functions.*/

#include <iostream>

using namespace std;

int main()
{
    int num;
    int a,b,c,d,e,f,g,h;
    cout << "This program was written by Christian Sylvester" << endl;
    cout << " " << endl;
    cout << "The function of this program is to read from the keyboard, a five digit number." << endl;
    cout << "The program will separate the number into its individual digits and" << endl;
    cout << "display the digits separated from one another by three spaces." << endl;
    cout << " " << endl;
    cout << "Please enter a five digit number:" << endl;
    cin >> num;

    a = num/10000;
    b = num%10000;
    c = b/1000;
    d = b%1000;
    e = d/100;
    f = d%100;
    g = f/10;
    h = f%10;

    cout << a << "   " << c << "   " << e << "   " << g << "   " << h << endl;
    return 0;
}
