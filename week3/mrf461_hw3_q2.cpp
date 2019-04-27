//
//  mrf461_hw3_q2.cpp
//  prac
//
//  Created by Matthew Femia on 4/24/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

string name;
int gradYear;
int currentYear;
int yearDiff;
int status [4] = {};

int main()
{
    /* PROMPT FOR USER INPUTS */
    cout<<"Please enter your name: ";
    cin>>name;
    
    cout<<"Please enter your graduation year: ";
    cin>>gradYear;
    
    cout<<"Please enter current year: ";
    cin>>currentYear;
    
    yearDiff = gradYear - currentYear;
    
    if (yearDiff < 0 || yearDiff == 0)
    {
        cout<<name<<", you are Graduated"<<endl;
    }
    else if (yearDiff == 1)
    {
        cout<<name<<", you are a Senior"<<endl;
    }
    else if (yearDiff == 2)
    {
        cout<<name<<", you are a Junior"<<endl;
    }
    else if (yearDiff == 3)
    {
        cout<<name<<", you are a Sophomore"<<endl;
    }
    else if (yearDiff == 4)
    {
        cout<<name<<", you are a Freshmen"<<endl;
    }
    else
    {
        cout<<"Error"<<endl;
    }
    
    return 0;
}
