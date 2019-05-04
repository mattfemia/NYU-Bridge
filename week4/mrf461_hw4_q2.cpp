//
//  mrf461_hw4_q2.cpp
//  practice1
//
//  Created by Matthew Femia on 4/30/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int decNum = 0;
int thousand = 0;
int fivehundred = 0;
int hundred = 0;
int fifty = 0;
int ten = 0;
int five = 0;
int one = 0;



int main()
{
    // Error check for positive integer
    while (decNum <= 0) {
        cout<<"Enter decimal number: "<<endl;
        cin>>decNum;
    }
    
    // M numeral
    if (decNum / 1000 >= 1) {
        thousand = decNum / 1000;
        decNum = decNum % 1000;
        
        for (int x = 1; x<=thousand; x++){
            cout<<"M";
        }
    }
    
    // C numeral
    if (decNum / 500 >= 1) {
        if (decNum >= 900){
            cout<<"CM";
            decNum = decNum - 900;
        }
        else {
            fivehundred = decNum / 500;
            decNum = decNum % 500;
            
            for (int x=1; x<=fivehundred; x++){
                cout<<"D";
            }
        }
    }
    
    // D numeral
    if (decNum / 100 >= 1) {
        if (decNum >= 400) {
            cout<<"CD";
            decNum = decNum - 400;
        }
        else {
            hundred = decNum / 100;
            decNum = decNum % 100;
            
            for (int x=1; x<=hundred; x++){
                cout<<"C";
            }
        }
    }
    
    // C numeral
    if (decNum / 50 >= 1) {
        if (decNum >= 90) {
            cout<<"XC";
            decNum = decNum - 90;
        }
        else {
            fifty = decNum / 50;
            decNum = decNum % 50;
            
            for (int x=1; x<=fifty; x++){
                cout<<"L";
            }
        }
    }
    
    // X numeral
    if (decNum / 10 >= 1) {
        if (decNum >= 40) {
            cout<<"XL";
            decNum = decNum - 40;
        }
        else {
            ten = decNum / 10;
            decNum = decNum % 10;
            
            for (int x=1; x<=ten; x++){
                cout<<"X";
            }
        }
    }
    
    // V numeral
    if (decNum / 5 >= 1) {
        if (decNum >= 9) {
            cout<<"IX";
            decNum = decNum - 9;
        }
        else {
            five = decNum / 5;
            decNum = decNum % 5;
            
            for (int x=1; x<=five; x++){
                cout<<"V";
            }
        }
    }
    
    // I numeral
    if (decNum / 1 >= 1) {
        if (decNum == 4) {
            cout<<"IV";
            decNum = decNum - 4;
        }
        else {
            one = decNum / 1;
            decNum = decNum % 1;
            
            for (int x=1; x<=one; x++){
                cout<<"I";
            }
        }
    }
    
    cout<<endl;
    return 0;
}
