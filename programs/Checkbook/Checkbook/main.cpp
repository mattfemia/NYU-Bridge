//
//  main.cpp
//  programs
//
//  Created by Matthew Femia on 07/14/19
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Account{
private:
    int checkNumber;
    double checkAmount;
    string nameOnCheck;
    void check();
public:
    int getCheckNum();
    double getCheckAmount();
    string getNameOnCheck();
    void set(int new_checkNumber, double new_checkAmount, string new_nameOnCheck);
    
};

int Account::getCheckNum(){
    return checkNumber;
}
double Account::getCheckAmount(){
    return checkAmount;
}
string Account::getNameOnCheck(){
    return nameOnCheck;
}

void Account::check(){
    if (checkNumber < 0){
        cout << "Error: check number cannot be a negative number" << endl;
    }
    if (checkAmount < 0){
        cout << "Error: check amount cannot be a negative number" << endl;
    }
}

void Account::set(int new_checkNumber, double new_checkAmount, string new_nameOnCheck){
    checkNumber = new_checkNumber;
    checkAmount = new_checkAmount;
    nameOnCheck = new_nameOnCheck;
    check();
}


int main() {
    
    int currentCheckNum;
    double currentCheckAmount;
    string currentNameOnCheck;
    
    Account myAccount;
    cout << "Please enter the check number:" << endl;
    cin >> currentCheckNum;
    
    cout << "Please enter the dollar amount enclosed in the check:" << endl;
    cout << "$";
    cin >> currentCheckAmount;
    
    cin.ignore();
    cout << "Please enter the name listed on the check:" << endl;
    getline(cin, currentNameOnCheck);
    
    myAccount.set(currentCheckNum, currentCheckAmount, currentNameOnCheck);
    
    cout << endl;
    cout << "Check #" << myAccount.getCheckNum() << endl;
    cout << "$" << myAccount.getCheckAmount() << endl;
    cout << "Submitted by: " << myAccount.getNameOnCheck() << endl;
    
    return 0;
}
