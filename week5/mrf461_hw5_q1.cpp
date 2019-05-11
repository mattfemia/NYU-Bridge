//
//  mrf461_hw5_q1.cpp
//
//  Created by Matthew Femia on 5/7/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int num = 0;

int multTable(int number);

int main() {
    
    // Error check input for positive value
    while (num <= 0){
        cout<<"Please enter a positive integer: "<<endl;
        cin>>num;
    }
    
    multTable(num);
    return 0;
}
// Implement multiplacation table
int multTable(int number) {
    for (int x=1; x <= number; x++) {
        
        for (int y=1; y<=number; y++) {
            int result = x * y;
            
            // Fix spacing between numbers in tables
            if (result < 10) {
                cout<<result<<"    ";
            }
            else if (result >= 10 && result < 100) {
                cout<<result<<"   ";
            }
            else if (result >= 100 && result < 1000) {
                cout<<result<<"  ";
            }
            else if (result >= 1000 && result < 10000) {
                cout<<result<<" ";
            }
            else {
                cout<<result;
            }
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}
