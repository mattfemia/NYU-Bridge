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
    
    /* Quadratic equation calculations */
    
    // Calculation of the discriminant (D)
    D = sqrt((pow(b, 2)) - (4 * a * c));
    
    if (D > 0)
    {
        discriminant = "positive";
    }
    else if (D < 0)
    {
        discriminant = "negative";
    }
    else
    {
        discriminant = "zero";
    }
    
    // Positive term (x1)
    x1 = ( (-b + D) / (2 * a) );
    
    // Negatie term (x2)
    x2 = ( (-b - D) / (2 * a) );
    
    // Calculate if x-values are real numbers
    cout<<isnan(x1);
    cout<<isnan(x2);
}
