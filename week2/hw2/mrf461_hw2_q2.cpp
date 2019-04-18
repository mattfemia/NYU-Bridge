//
//  mrf461_hw_q2.cpp
//  hw2
//
//  Created by Matthew Femia on 4/17/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int calculate();

// Initialize variables in global scope to be used by both fxns
float total;
int dollars;
int cents;
int quarters;
int dimes;
int nickels;
int pennies;

int main()
{
    
    // Prompt user
    cout<<"Please enter your amount in the form of dollars and cents separated by a space:"<<endl;
    cin>>dollars>>cents;
    
    // Concatenate dollars and cents to form dollar value for calculate fxn
    total = dollars + (float(cents) / 100);
    
    // Error-check user-input
    if (total < 0) {
        cout<<"Cannot perform on negative value"<<endl;
        return 1;
    }
    else {
        
        // Conditional for proper grammar in output
        if (dollars == 1) {
            cout<<dollars<<" dollar and "<<cents<<" cents is: "<<endl;
            
            calculate();
        }
        else {
            cout<<dollars<<" dollars and "<<cents<<" cents are: "<<endl;
            
            calculate();
        }
    }
}

// (To avoid doubling code-length for both grammar conditionals)
int calculate()
{
    while (total >= 0.01) // to account for trailing decimal in float
    {
        // Calculate coin amounts based on quotients
        quarters = total / 0.25;
        total = total - (float(quarters) * 0.25);
        
        dimes = total / 0.10;
        total = total - (float(dimes) * 0.10);
        
        nickels = total / 0.05;
        total = total - (float(nickels) * 0.05);
        
        pennies = total / 0.01;
        total = total - (float(pennies) * 0.01);
    }
    
    // Output statement for coin amounts
    cout<<quarters<<" quarters "<<dimes<<" dimes "<<nickels<<" nickels "<<pennies<<" pennies "<<endl;
    
    return 0;
}
