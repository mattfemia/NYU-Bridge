//
// Created by Matthew Femia on 2019-06-19.
//

#include <iostream>
using namespace std;

void triangle(int num);

int main() {

    int num;


    cout << "Enter a num: " << endl;
    cin >> num;
    // Find factorial recursively
    triangle(num);

    return 0;
}

void triangle(int num){
    if (num > 1){
        triangle(num - 1);
    }
    for (int i = 0; i < num; i++){
        cout << "*";
    }
    cout << endl;
}