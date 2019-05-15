//
//  analyzeDigits.cpp
//  testingCppMods
//
//  Created by Matthew Femia on 5/13/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int analyzeDigits(int num, int& outSum);

int main(){
    
    int num, countDigs, sumDigs;
    
    cout<<"Please enter a positive integer: "<<endl;
    cin>>num;
    
    countDigs = analyzeDigits(num, sumDigs);
    
    cout<<num<<" has "<<countDigs<<" digits and their sum is "<<sumDigs<<endl;
    
    return 0;
}

int analyzeDigits(int num, int& outSum){
    int count, sum, currDig;
    
    count = 0;
    sum = 0;
    
    while(num > 0){
        currDig = num % 10;
        count++;
        sum += currDig;
        num = num / 10;
    }
    
    return count;
}
