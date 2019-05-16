//
//  mrf461_hw6_q4.cpp
//
//  Created by Matthew Femia on 5/15/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

void printDivisors(int num);

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int num;
    
    cout<<"Please enter a positive integer >= 2: ";
    cin>>num;
    
    printDivisors(num);
    
    return 0;
}

void printDivisors(int num){
    int root = sqrt(num);
    int iterate;
    string divisors;
    
    for (iterate=1; iterate < root; iterate++){
        if (num % iterate == 0){
            cout<<iterate<<" ";
        }
    }
    
    for (iterate; iterate > 1; iterate--){
        if (num % iterate == 0){
            cout<<num/iterate<<" ";
        }
    }
    cout<<num<<endl;
}
