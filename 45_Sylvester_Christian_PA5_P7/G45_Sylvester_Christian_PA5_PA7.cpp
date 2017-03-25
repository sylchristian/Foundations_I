// Author: Christian Sylvester
// Course: CS1428.001
// Instructor: Husain Gholoom
// Group Number: 45
// Program Number: 7
// Due Date: October 14th, 2014

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    // Declare and initialize variables
    int firstNum;
    int secondNum;
    int evensum = 0;
    int oddsum = 0;
    bool check = true;

    // Begin main output
    cout << "This program was written by Christian Sylvester" << endl << endl;


    cout << "The function of this program is, given two positve numbers, the program" << endl;
    cout << "will display the following" << endl << endl;


    cout << "     1. All even numbers between firstNum and secondNum." << endl;
    cout << "     2. All odd numbers between firstNum and secondNum." << endl;
    cout << "     3. Sum of all even numbers between firstNum and secondNum." << endl;
    cout << "     4. Sum of all odd numbers between firstNum and secondNum." << endl;
    cout << "     5. All prime numbers between firstNum and secondNum." << endl;
    cout << "     6. The numbers and their squares between firstNum and secondNum." << endl << endl << endl;

    // Specify the range in which we will be working
    cout << "Enter the first number:" << endl;
    cin >> firstNum;
    cout << "Enter the second number:" << endl;
    cin >> secondNum;

    // Begin if statements
    if (firstNum < secondNum){

        cout << "You entered " << firstNum << " and " << secondNum << "." << endl << endl;

        // Beginning of calculation outputs via for loops
        cout << "     1. All even numbers: ";
        for (int i = firstNum; i < secondNum - 1; i++){

            if (i % 2 != 0){

                evensum += i + 1;

                cout << i + 1 << " ";
            }

            else if (i % 2 == 1){

            }
        }

        cout << endl;

        cout << "     2. All odd numbers: ";
        for (int i = firstNum + 1; i <= secondNum; i++){

            if ((i % 2) != 0){

                oddsum += i;

                cout << i << " ";
            }

            else if ((i % 2) == 1){

            }
        }

        cout << endl;

        cout << "     3. Sum of all the even numbers: " << evensum << endl;
        cout << "     4. Sum of all the odd numbers: " << oddsum << endl;

        cout << "     5. All the prime numbers: ";
        for (int i = firstNum; i <= secondNum; i++){

            for (int j = 2; j <= secondNum; j++){

                if (i % j !=0){

                    cout << i << " "; break;
                }
                else{

                    break;
                }
            }
        }


        cout << endl;
        cout << "     6. Number     Square" << endl;
        for (int i = firstNum; i <= secondNum; i++){

            cout << "          " << i << "           " << (i*i) << endl;
        }

    }

    // Bottom end of the beginning if statement
    else if (firstNum >= secondNum){

        cout << "Error: The first number must be less than the second number." << endl;
    }
    else{

        cout << "Error: The numbers must be positive." << endl;
    }

    return 0;
}
