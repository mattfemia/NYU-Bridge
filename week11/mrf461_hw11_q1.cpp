//
//  mrf461_hw11_q1.cpp
//  week11
//
//  Created by Matthew Femia on 6/16/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

void printTriangle(int n);
void printOpositeTriangles(int n);
void printRuler(int n);

int main() {
    int triangleSize;
    
    cout << "Please enter the amount height of the triangle: ";
    cin >> triangleSize;
    
    printTriangle(triangleSize);
    cout << endl;
    printOpositeTriangles(triangleSize);
    cout << endl;
    printRuler(triangleSize);
    return 0;
}

// a
void printTriangle(int n){
    for (int star = 0; star < n; star++){
        cout << "*";
    }
    cout << endl;
    if (n > 1){
        printTriangle(n - 1);
    }
}

// b
void printOpositeTriangles(int n){
    for (int star = 0; star < n; star++){
        cout << "*";
    }
    cout << endl;
    if (n > 1)
        printOpositeTriangles(n - 1);
    for (int star = 0; star < n; star++){
        cout << "*";
    }
    cout << endl;
}

// c
void printRuler(int n){
    if (n > 1)
        printRuler(n - 1);
    for (int start = n; start > 0; start--){
        cout << "-";
    }
    cout << endl;
}
