//
//  mrf461_hw6_q1.cpp
//
//  Created by Matthew Femia on 5/15/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int fib(int n);

int main(){
    int num;
    
    cout<<"Please enter a positive integer: ";
    cin>>num;
    
    cout<<fib(num)<<endl;
    
    return 0;
}

int fib(int n){
    int newNum = 0;
    int sum = 1;
    
    // i=2 to deal with first two elements of fib sequence
    for (int i=2; i <= n; i++){
        sum = sum + newNum;
        newNum = sum - newNum;
    }
    
    // Return value of element in the sequence
    return sum;
}
