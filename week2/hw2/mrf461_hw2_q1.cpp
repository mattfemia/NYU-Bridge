//
//  mrf461_hw2_q1.cpp
//  hw2
//
//  Created by Matthew Femia on 4/17/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int quarters;
    int dimes;
    int nickles;
    int pennies;
    float sum;
    float cents;
    
    // Prompt for coin input
    cout<<"Please enter number of coins:"<<endl;
    
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
    
    // Calculation;
    sum = (quarters * 0.25) + (dimes * 0.10) + (nickles * 0.05) + (pennies * 0.01);
    cents = 100 * (float(sum) - int(sum));
    
    // Response statement
    cout<<"The total is "<<(int(sum) / 1.00)<<" dollars and "<<cents<< " cents"<<endl;
    
}
