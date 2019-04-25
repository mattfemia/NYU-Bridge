//
//  mrf461_hw3_q6.cpp
//  prac
//
//  Created by Matthew Femia on 4/24/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    // Initialize variables
    string day;
    int st_hour, st_min;
    int end_hour, end_min;
    char dot;
    char sign;
    
    int st_time;
    int end_time;
    int call_len;
    int dollars;
    int cents;
    int day_st, day_end;
    int night_st, night_en;
    
    // Prompt user for details of the call
    cout<<"Please enter day of the week the call was made. Use the following two-letter codes:"<<endl;
    cout<<"Monday = Mo"<<endl;
    cout<<"Tuesday = Tu"<<endl;
    cout<<"Wednesday = We"<<endl;
    cout<<"Thursday = Th"<<endl;
    cout<<"Friday = Fr"<<endl;
    cout<<"Saturday = Sa"<<endl;
    cout<<"Sunday = Su"<<endl;
    cin>>day;
    
    cout<<"Please enter the time at the start of the call in 24h format: ";
    cin>>st_hour>>dot>>st_min;
    
    cout<<"Please enter the time the call ended in 24h format: ";
    cin>>end_hour>>dot>>st_min;
    
    /* Convert time values to comparative value system (total minutes) */
    
    // Call information conversion
    st_time = (st_hour * 60) + st_min;
    end_time = (end_hour * 60) + end_min;
    
    // Day cycle conversion
    day_st = 8 * 60;
    day_end = (17 * 60) - 1;
    
    //Night cycle conversion
    night_st = 18 * 60;
    night_end = (8 * 60) - 1;
    
    // Determine cost of call based on start time
    if (day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr") {
        // week day/night cost
    }
    else {
        // weekend cost
    }
    
    
}
