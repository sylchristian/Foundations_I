// Author: Christian Sylvester
// Course: CS1428.001
// Group Number: 45
// Assignment Number: 4
// Due Date: September 23, 2014
// Instructor: Husain Gholoom

#include <iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main()
{
    setprecision(8);
    ifstream fin;
    double t; // First house tax rate
    double u; // Second house tax rate
    double x; // First house price
    double y; // Second house price
    double a; // First house fuel costs
    double b; // Second house fuel costs

    fin.open("input.txt");
    fin >> x;
    fin >> a;
    fin >> t;
    fin >> y;
    fin >> b;
    fin >> u;

    const double COST_1 = (((5*(x*t))+x)+(5*a));
    const double COST_2 = (((5*(y*u))+y)+(5*b));

    ofstream fout;
    fout.open("output.txt");
    fout << "This program was written by: Christian Sylvester" << endl << endl << endl;
    fout << "Given the initial cost of the house, estimated annual fuel cost, and the annual tax rate," << endl;
    fout << "the function of this program is to determine the total cost after a five year period for" << endl;
    fout << "a house." << endl << endl << endl;
    fout << "Initial House Cost     Annual Fuel Cost     Tax Rate     Total Cost" << endl << endl;
    fout << "    " << x << setw(24) << a << setw(18) << t << setw(13) << COST_1 << endl;
    fout << "    " << y << setw(24) << b << setw(18) << u << setw(13) << COST_2 << endl;
    fin.close();
    fout.close();

    return 0;
}
