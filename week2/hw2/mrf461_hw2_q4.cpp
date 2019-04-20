//
//  mrf461_hw_q4.cpp
//  hw2
//
//  Created by Matthew Femia on 4/19/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//
//


#include <iostream>
using namespace std;

int main()
{
    // Initialize variables
    int num1;
    int num2;
    int sum;
    int difference;
    int product;
    float quotient;
    int q_int;
    float remainder;
    
    // Prompt for user input. *2 inputs on line for cin prompt*
    cout<<"Please enter two positive integers, separated by a space: "<<endl;
    cin>>num1>>num2;
    
    // Perform calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = float(num1) / float(num2);
    q_int = num1 / num2;
    remainder = num1 % num2;
    
    // Output calculations into corresponding string statements
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
    cout<<num1<<" - "<<num2<<" = "<<difference<<endl;
    cout<<num1<<" * "<<num2<<" = "<<product<<endl;
    cout<<num1<<" / "<<num2<<" = "<<quotient<<endl;
    cout<<num1<<" div "<<num2<<" = "<<q_int<<endl;
    cout<<num1<<" mod "<<num2<<" = "<<remainder<<endl;
    
    return 0;
}

