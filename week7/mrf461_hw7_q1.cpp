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

int printMonthCalendar(int numOfDays, int startingDay);
bool leapYear(int year);
void printYearCalendar(int numOfDays, int startingDay);
void nameCalendar(int year, int startingDay, string name);


int main(){
    
    int startingDay;
    int currentYear;
    string name;
    
    cout<<"Please enter a number 1-7 representing the day in the week of the first day in that month (1 for Monday, 2 for Tuesday, 3 for Wednesday): "<<endl;
    cin>>startingDay;
    
    cout<<"Please enter the current year as an integer: ";
    cin>>currentYear;
    
    cout<<"Please enter your first name: ";
    cin>>name;
    
    // Call function
    nameCalendar(currentYear, startingDay, name);
    
    return 0;
}

// Question 1a.
int printMonthCalendar(int numOfDays, int startingDay){
    // Print days of week as strings
    cout<<"Mon    Tue    Wed    Thr    Fri    Sat    Sun    "<<endl;
    
    // Print first week of month
    for (int y=1; y < (7 - (7 - startingDay)); y++){
        cout<<"       ";
    }
    for (int x=1; x <= (7 - startingDay + 1); x++){
        cout<<x;
        cout<<"      ";
    }
    cout<<endl;
    
    // Print the rest of the calendar -- acounting for spacing difference with > 1 digit
    for (int nextWeek=(7 - startingDay + 2); nextWeek <= numOfDays; nextWeek++){
        
        // Account for end of the week == multiples of 7, otherwise account for end of week
        if ( (startingDay == 1 && nextWeek % 7 == 0) || nextWeek % 7 == (7 - startingDay + 1)){
            
            // New line after end of the week
            if (nextWeek >= 10){
                cout<<nextWeek<<"   "<<endl;
            }
            else{
                cout<<nextWeek<<"    "<<endl;
            }
        }
        // Fill-out the line for the week
        else {
            if (nextWeek >= 10){
                cout<<nextWeek<<"     ";
            }
            else {
                cout<<nextWeek<<"      ";
            }
        }
    }
    cout<<endl;
    
    // Print the number for the day of the week
    int newStartDay = (numOfDays - (7 - startingDay)) % 7;
    
    // Account for cornercase where [(numOfDays - (7 - startingDay)) % 7] equals a multiple of 7
    if (newStartDay == 0) {
        newStartDay = 7;
    }
    
    return newStartDay;
}


// Question 1b.
bool leapYear(int year){
    // Leap year requirements
    if ((year % 4 == 0) && (year % 100 != 0)){
        return true;
    }
    
    else {
        // Other possibility for determining leap year
        if ((year % 4 == 0) && (year % 400 == 0)){
            return true;
        }
        // Not leap year
        else {
            return false;
        }
    }
}

// Question 1c.
void printYearCalendar(int year, int startingDay){
    
    // Print January month and create variable for day at end of month
    int newStart = printMonthCalendar(31, startingDay);
    
    // Start with February and print each month
    for (int monthCounter = 2; monthCounter <= 12; monthCounter++){
        bool leap = leapYear(year);
        
        // February month w/ or w/o leap year
        if (monthCounter == 2) {
            if (leap == true) {
                newStart = printMonthCalendar(29, newStart);
            }
            else {
                newStart = printMonthCalendar(28, newStart);
            }
        }
        // Months with 31 days
        else if (monthCounter == 3 || monthCounter == 5 || monthCounter == 7 ||monthCounter == 8 || monthCounter == 10 || monthCounter == 12) {
            newStart = printMonthCalendar(31, newStart);
        }
        // Months with 30 days
        else {
            newStart = printMonthCalendar(30, newStart);
        }
    }
}


// Question 1d.
// Add name to the calendar to customize
void nameCalendar(int year, int startingDay, string name){
    cout<<endl<<"Year "<<year<<" for "<<name<<endl<<endl;
    printYearCalendar(year, startingDay);
}
