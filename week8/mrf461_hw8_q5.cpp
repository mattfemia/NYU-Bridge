//
//  mrf461_hw8_q5.cpp
//  week8
//
//  Created by Matthew Femia on 5/29/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, middleName, lastName;
    
    cout << "Please enter your full name (first_name middle_name last_name): " << endl;
    cin >> firstName >> middleName >> lastName;
    
    cout << lastName << ", " << firstName << " "<< middleName[0] << "." << endl;
    
    return 0;
}
