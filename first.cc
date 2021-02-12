/**
 *  @file:      first.cc
 *  @author:    Matthew Ahumada
 *  @date:      February 11, 2021
 *  @brief:     Calculating the area of a triangle when it's three sides are input.
 **/

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
using namespace std;

///Constants and function prototypes
int main(int argc, char const *argv[]){
    
    ///Variable declaration
    double side1, side2, side3, s, area;
    char answer;

    ///Rounds output to two decimals
    cout << fixed << setprecision(2); 
    
    ///Loop
    do{

    
        ///Inputs
         cout << "Enter the first side: ";
        cin >> side1;
        cout << "Enter the second side: ";
        cin >> side2;
        cout << "Enter the third side: ";
        cin >> side3;

        ///Checks if it is a real triangle
        if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1){
            cout << "(Invalid)";
            exit(0);
        }
    
        ///Calculations
        s = (side1 + side2 + side3) / 2.00;
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

        ///Final output
        cout << "Valid, " << area << endl;
        cout << "Do you want to input another triangle? (y/n) ";
        cin >> answer;
    }
    while(answer == 'y');
    return 0;
}
