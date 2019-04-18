//
//  mrf461_hw_q3.cpp
//  hw2
//
//  Created by Matthew Femia on 4/18/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//
//
// TODO: Refactor


#include <iostream>
using namespace std;

int days;
int hours;
int mins;
int add;

int main()
{
    cout<<"Please enter the number of days John has worked: ";
    cin>>add;
    days = days + add;
    
    cout<<"Please enter the number of hours John has worked: ";
    cin>>add;
    hours = hours + add;
    
    cout<<"Please enter the number of minutes John has worked: ";
    cin>>add;
    mins = mins + add;
    
    cout<<""<<endl;
    
    cout<<"Please enter the number of days Bill has worked: ";
    cin>>add;
    days = days + add;
    
    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>add;
    hours = hours + add;
    
    cout<<"Please enter the number of minutes Bill has worked: ";
    cin>>add;
    mins = mins + add;
    
    if (hours > 24)
    {
        days = days + (hours / 24);
        hours = hours % 24;
    }
    
    // TODO: minutes > 60 cornercase?
    
    cout<<"The total time both of them have worked together is: "<<days<<" days, "<<hours<<" hours and "<<mins<<" minutes."<<endl;
}

