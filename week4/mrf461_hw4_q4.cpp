//
//  mrf461_hw4_q4.cpp
//
//  Created by Matthew Femia on 4/30/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float seqlen;
    float nums = 0;
    float product = 0;
    float gmean;
    
    /* a) implementation */
    
    //
    cout<<"Please enter the length of the sequence: ";
    cin>>seqlen;
    
    cout<<"Please enter your sequence: "<<endl;
    cin>>product;
    
    // Loop to compute the value that we are finding the geometric mean from
    for (int x=0; x<(seqlen-1); x++) {
        cin>>nums;
        product = nums * product;
    }
    cout<<endl;
    
    // Compute gmean using cmath library functions
    gmean = pow(product, (1/seqlen));
    
    cout<<"The geometric mean is: "<<gmean<<endl;
    
    
    
    /* b) implementation */
    float product2 = 0;
    float nums2 = 0;
    float seqlen2 = 0;
    
    
    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: "<<endl;
    cin>>product2;
    
    // Error check for initial value
    if (product2 != -1) {
        
        // Track numbers inputted with 'x' and find end product with 'product2' value
        for (float x=2.0; nums2 != -1; x++) {
            cin>>nums2;
            
            if (nums2 != -1) {
                product2 = product2 * nums2;
                seqlen2 = x;
            }
        }
        
        // Calculate geometric mean
        gmean = pow(product2, (1/seqlen2));
        
        cout<<"The geometric mean is: "<<gmean<<endl;
    }
    else {
        return 0;
    }
    
    return 0;
}
