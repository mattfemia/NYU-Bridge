//
//  mrf461_hw4_q1.cpp
//  practice1
//
//  Created by Matthew Femia on 4/30/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//


#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int i = 1;
    
    // Error check for integer value from user
    while (n <= 0) {
        
        // Prompt user for integer
        cout<<"Please enter a positive integer: ";
        cin>>n;
    }
    
    // For loop implementation
    for (i = 1; i <= n; i++) {
        
        cout<<i * 2<<endl;
    }
    
    // While loop implementation
    while (i <= n) {
        cout<<i * 2<<endl;
        i++;
    }
    
    return 0;
}
