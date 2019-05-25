//
//  callByRef.cpp
//  testingCppMods
//
//  Created by Matthew Femia on 5/15/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int &num1, int &num2);


int main(){
    
    int a;
    int b;
    
    cout<<"Enter two integers separated by a space: "<<endl;
    cin>>a>>b;
    
    swap(a, b);
    
    cout<<&a<<" "<<&b<<endl;
    
    return 0;
}

void swap(int &num1, int &num2) {
    int temp;
    
    temp = num1;
    num1 = num2;
    num2 = temp;
}
