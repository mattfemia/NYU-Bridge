//
//  mrf461_week15.cpp
//  week15
//
//  Created by Matthew Femia on 7/21/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class EmployeeData{
private:
    string employeeName;
    double employeeNumber;
    double payRate;
public:
    // Accessors
    string getName() const { return employeeName; }
    double getNumber() const { return employeeNumber; }
    double getRate() const { return payRate; }
    
    // Mutators
    string setEmployeeName();
    double setEmployeeNumber();
    double setPayRate();
};

int main(){
    
    return 0;
}

/* TODO: Give functionality to mutator functions  */
string EmployeeData::setEmployeeName(){
    
    string newEmployeeName = "";
    
    return newEmployeeName;
}

double EmployeeData::setEmployeeNumber(){
    
    double newEmployeeNumber = 0;
    
    return newEmployeeNumber;
    
}

double EmployeeData::setPayRate(){
    
    double newPayRate = 0;
    
    return newPayRate;
}


