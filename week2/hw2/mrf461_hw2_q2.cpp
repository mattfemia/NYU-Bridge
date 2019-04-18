//
//  mrf461_hw_q2.cpp
//  hw2
//
//  Created by Matthew Femia on 4/17/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float total;
    int dollars;
    int cents;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    
    // Prompt user
    cout<<"Please enter your amount in the form of dollars and cents separated by a space:"<<endl;
    cin>>dollars>>cents;
    
    // Concatenate dollars and cents to form dollar value
    total = dollars + (float(cents) / 100);
    
    // Error-check user-input
    if (total < 0) {
        cout<<"Cannot perform on negative value"<<endl;
        return 1;
        
        // TODO: Repeat input?
    }
    else {
        // Conditional for proper grammar in output
        if (dollars == 1) {
            cout<<dollars<<" dollar and "<<cents<<" cents is: "<<endl;
        }
        else {
            cout<<dollars<<" dollars and "<<cents<<" cents are: "<<endl;
        }
    }
}
