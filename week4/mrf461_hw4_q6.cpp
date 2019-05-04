//
//  mrf461_hw4_q6.cpp
//
//  Created by Matthew Femia on 4/30/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int number;

int main()
{
    cout<<"Please input a positive integer: ";
    cin>>number;
    
    // Iterate over numbers
    for (int x=1; x <= number; x++){
        int evens = 0;
        int odds = 0;
        int length = 0;
        
        cout<<"number is "<<x<<endl;
        
        // Find the number of digits in 'number'
        int temp_num = number;
        while (temp_num) {
            temp_num = temp_num / 10;
            length++;
        }
        
        // Iterate over digits
        for (int y=1; y < length; y++) {
            int digit = x % 10;
            
            if ( (digit % 2) == 0) {
                evens++;
            }
            else {
                odds++;
            }
            
            if (evens > odds) {
                cout<<x<<endl;
            }
        }
    }
    
    cout<<endl;
}
