//
//  mrf461_hw12_q1.cpp
//  week12
//
//  Created by Matthew Femia on 7/1/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    double totalDeposit = 0;
    int numOfChecks = 0;
    double currentBalance = 0;
    double newBalance = 0;
    double balanceDiff = 0;
    
    class Check{
        int checkNumber;
        double checkAmount;
        bool cashed;
    public:
        int currentCheckNum;
        int getCheckNumber() const{ return checkNumber; }
        void setCheckNumber(int newCheckNumber);
        int getCheckAmount() const{ return checkAmount; }
        void setCheckAmount(double newCheckAmount);
        
        /* TODO: Accessor/mutators for cashed var */
        
        // Define constructor
        Check(int newCheckNumber=0, double newCheckAmount=0, bool newCashed=0);
    };
    
    /* Define array of class Check to access variables */
    
    const int totalCheckNums = 1000;
    
    Check checkBook[totalCheckNums];
    
    cout << "You have a total of " << numOfChecks << " checks being deposited. " << endl;
    cout << "The total sum of your deposit is: " << totalDeposit << endl;
    cout << "Balance after deposit = " << newBalance << "(" << balanceDiff << ")" << endl;
    cout << endl;
    
    cout << "Please enter each check on a new line in the following form : " << endl;
    cout << "check Number, check amount, if check cashed=1 OR check not cashed = 0" << endl << endl;
    cout << "After you have finished typing checks to be deposited please type DONE on a separate line" << endl;
    
    int userCheckNum;
    double userCheckAmt;
    bool userCashed;
    
    cin >> userCheckNum >> userCheckAmt >> userCashed;
    
    checkBook[userCheckNum].setCheckNumber(userCheckNum);
    checkBook[userCheckNum].setCheckAmount(userCheckAmt);
    // checkBook.setCashed(userCashed);
    
    return 0;
}
