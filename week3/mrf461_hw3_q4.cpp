//
//  mrf461_hw3_q4.cpp
//  prac
//
//  Created by Matthew Femia on 4/24/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Define constants
    const int FLOOR_ROUND = 1;
    const int CEILING_ROUND = 2;
    const int ROUND = 3;
    
    // Initialize variables
    double realnum;
    int method;
    
    // Prompt user to enter real number
    cout<<"Please enter a Real number: "<<endl;
    cin>>realnum;
    
    // Prompt for rounding method
    cout<<"Choose your rounding method: "<<endl;
    cout<<"1. Floor round"<<endl;
    cout<<"2. Ceiling round"<<endl;
    cout<<"3. Round to the nearest whole number"<<endl;
    cin>>method;
    
    // Switch statement to determine method call
    switch (method) {
        case FLOOR_ROUND:
            cout<<floor(realnum)<<endl;
            break;
        case CEILING_ROUND:
            cout<<ceil(realnum)<<endl;
            break;
        case ROUND:
            cout<<round(realnum)<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
    }
    
    return 0;
}
