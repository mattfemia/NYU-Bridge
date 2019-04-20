//
//  mrf461_hw2_q1.cpp
//  hw2
//
//  Created by Matthew Femia on 4/17/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

// Code refactored

#include <iostream>
using namespace std;

int coins();

int quarters = 0;
int dimes = 0;
int nickles = 0;
int pennies = 0;
float sum;
float cents;

int main()
{
    // Error checking for incorrect input values
    while (quarters <= 0 || dimes <= 0 || nickles <= 0 || pennies <= 0) {
        
        // Prompt for coin input
        cout<<"Please enter number of coins:"<<endl;
        
        // Retrieve values for each coin
        coins();
    }
    // Calculation;
    sum = (quarters * 0.25) + (dimes * 0.10) + (nickles * 0.05) + (pennies * 0.01);
    cents = 100 * (float(sum) - int(sum));
    
    // Response statement
    cout<<"The total is "<<(int(sum) / 1.00)<<" dollars and "<<cents<< " cents"<<endl;
    
    return 0;
}

// Function to nest inside of 'main' while loop
int coins()
{
    // Quarters
    cout<<"# of quarters: ";
    cin>>quarters;
    
    // Dimes
    cout<<"# of dimes: ";
    cin>>dimes;
    
    // Nickles
    cout<<"# of nickles: ";
    cin>>nickles;
    
    // Pennies
    cout<<"# of pennies: ";
    cin>>pennies;
    
    return 0;
}
