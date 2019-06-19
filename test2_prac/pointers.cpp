//
// Created by Matthew Femia on 2019-06-19.
//

#include <iostream>
using namespace std;


void pointerFunction(int *pointer1, int &value1);

int main() {

    int *newPointer;

    newPointer = new int;

    cout << *newPointer << endl;

    *newPointer = 100;

    cout << *newPointer << endl;
    cout << &newPointer << endl << endl;
/////////////////////////////////////////////////////////////////////////////////

    int newNum = 45;
    int *nextPointer;
    nextPointer = &newNum;
    *nextPointer = 60;

    cout << "newNum = " << newNum << endl;
    cout << "Value of nextPointer = " << *nextPointer << endl;
    cout << "Address of nextPointer = " << nextPointer << endl;
    cout << "Address of newNum = " << &newNum << endl << endl;
/////////////////////////////////////////////////////////////////////////////////

    int *pointerExample;
    int numberExample = 100;
    pointerExample = &numberExample;
    cout << "numberExample address before = " << &numberExample << endl << endl;

    pointerFunction(pointerExample, numberExample);
    cout << endl;
    cout << "numberExample = " << numberExample << endl;
    cout << "numberExample address = " << &numberExample << endl;

    return 0;
}

void pointerFunction(int* pointer1, int &value1){
    // Change value of pointer by changing address pointing to
    cout << "Pointer is " << *pointer1 << endl;

    int newVal = 100000;
    value1 = newVal;

    cout << "Value address is " << value1 << endl;
    cout << "Pointer now = " << *pointer1 << endl;

}

