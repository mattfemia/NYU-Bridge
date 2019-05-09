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

int multTable(int number) {
    for (int x=1; x <= number; x++) {
        
        for (int y=1; y<=number; y++) {
            cout<<x * y<<"     ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}
