//
//  mrf461_hw4_q3.cpp
//
//  Created by Matthew Femia on 4/30/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int decNum;
    
    cout<<"Enter a decimal number: "<<endl;
    cin>>decNum;
    
    cout<<"The binary representation of "<<decNum<<" is ";
    
    // Convert the decimal digit one binary digit at a time
    if ((decNum / 256) >= 1) {
        cout<<"1";
        decNum = decNum % 256;
    }
    else {
        cout<<0;
    }
    
    if ((decNum / 128) >= 1) {
        cout<<"1";
        decNum = decNum % 128;
    }
    else {
        cout<<"0";
    }
    
    if ((decNum / 64) >= 1) {
        cout<<"1";
        decNum = decNum % 64;
    }
    else {
        cout<<"0";
    }
    
    if ((decNum / 32) >= 1) {
        cout<<"1";
        decNum = decNum % 32;
    }
    else {
        cout<<"0";
    }
    
    if ((decNum / 16) >= 1) {
        cout<<"1";
        decNum = decNum % 16;
    }
    else {
        cout<<"0";
    }
    
    if ((decNum / 8) >= 1) {
        cout<<"1";
        decNum = decNum - 8;
    }
    else {
        cout<<"0";
    }
    
    if ((decNum / 4) >= 1) {
        cout<<"1";
        decNum = decNum - 4;
    }
    else {
        cout<<"0";
    }
    
    if ((decNum / 2) >= 1) {
        cout<<"1";
        decNum = decNum - 2;
    }
    else {
        cout<<"0";
    }
    
    if ((decNum / 1) >= 1) {
        cout<<"1";
        decNum = decNum - 1;
    }
    else {
        cout<<"0";
    }
    cout<<endl;
    
    return 0;
}
