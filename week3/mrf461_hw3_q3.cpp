//
//  mrf461_hw3_q3.cpp
//  prac
//
//  Created by Matthew Femia on 4/24/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // Initialize variables
    double a;
    double b;
    double c;
    double D;
    string discriminant;
    double x1;
    double x2;
    
    // User input prompts
    cout<<"Please enter value of a: ";
    cin>>a;
    
    cout<<"Please enter value of b: ";
    cin>>b;
    
    cout<<"Please enter value of c: ";
    cin>>c;
    
    if (a == 0 && b == 0 && c == 0) {
        cout<<"This equation has infinite number of solutions"<<endl;
    }
    else if (a == 0 && b == 0 && c != 0) {
        cout<<"This equation has no real solution"<<endl;
    }
    else {
        /* Quadratic equation calculations */
        
        // Calculation of the discriminant (D)
        D = sqrt((pow(b, 2)) - (4 * a * c));
        
        if (a != 0) {
            if (D > 0) {
                discriminant = "This equation has two real solutions ";
                x1 = ( (-b + D) / (2 * a) ); // Positive term (x1)
                x2 = ( (-b - D) / (2 * a) ); // Negatie term (x2)
                cout<<discriminant<<"x = "<<x1<<", "<<x2<<endl;
            }
            else if (D < 0) {
                discriminant = "This equation has no real solutions ";
                cout<<discriminant<<endl;
            }
            else {
                discriminant = "This equation has a single real solution ";
                x1 = ( (-b + D) / (2 * a) ); // Single term x1
                cout<<discriminant<<"x = "<<x1<<endl;
            }
        }
    }
    
    return 0;
}
