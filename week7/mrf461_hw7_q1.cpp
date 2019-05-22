//
//  mrf461_hw7_q1.cpp
//  week7
//
//  Created by Matthew Femia on 5/20/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int printMonthCalendar(int numOfDays, int StartingDay);

int main(){
    
    int numOfDays;
    int startingDay;
    
    cout<<"Please enter an integer for number of days in the month: "<<endl;
    cin>>numOfDays;
    
    cout<<"Please enter a number 1-7 representing the day in the week of the first day in that month (1 for Monday, 2 for Tuesday, 3 for Wednesday): "<<endl;
    cin>>startingDay;
    
    // Call function
    printMonthCalendar(numOfDays, startingDay);
    
    return 0;
}

// Question 1a.
int printMonthCalendar(int numOfDays, int startingDay){
    // Print days of week as strings
    cout<<"Mon    Tue    Wed    Thr    Fri    Sat    Sun    "<<endl;
    
    // Print first week of month
    for (int y=1; y <= (7 - startingDay); y++){
        cout<<"       ";
    }
    for (int x=1; x <= (7 - (startingDay - 1)); x++){
        cout<<x<<"      ";
    }
    cout<<endl;
    
    // Print the rest of the calendar -- acounting for spacing difference with > 1 digit
    for (int nextWeek=(7 - (startingDay - 2)); nextWeek <= numOfDays; nextWeek++){
        if (nextWeek % 7 == startingDay){
            if (nextWeek >= 10){
                cout<<nextWeek<<"   "<<endl;;
            }
            else{
                cout<<nextWeek<<"    "<<endl;;
            }
        }
        else {
            if (nextWeek >= 10){
                cout<<nextWeek<<"     ";
            }
            else{
                cout<<nextWeek<<"      ";
            }
        }
    }
    cout<<endl;
    
    // Print the number for the day of the week
    numOfDays = (numOfDays - (7 - (startingDay - 1) )) % 7;
    
    return numOfDays;
}

