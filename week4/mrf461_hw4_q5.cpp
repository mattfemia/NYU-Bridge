//
//  mrf461_hw4_q5.cpp
//  practice1
//
//  Created by Matthew Femia on 4/30/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    
    while (n <= 0) {
        cout<<"Please print a positive integer: ";
        cin>>n;
    }
    
    for (int i=0; i<n; i++)
    {
        cout<<"*";
        
        for (int x=0; x<=(2*i - 1);x++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
    cout<<endl;
    
    return 0;
}
