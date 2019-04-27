//
//  mrf461_hw3_q1.cpp
//  prac
//
//  Created by Matthew Femia on 4/24/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

// Initialize global variables
int item1;
int item2;
string clubCard = "";
float taxRate;
float baseP;
float discountP;
double totalP;


int main()
{
    /* User inputs */
    
    cout<<"Enter price of first item: ";
    cin>>item1;
    
    cout<<"Enter price of second item: ";
    cin>>item2;
    
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>clubCard;
    
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>taxRate;
    
    
    /* Base price of items */
    
    baseP = item1 + item2;
    cout<<"Base price: "<<baseP<<endl;
    
    
    /* Discounted price of items */
    
    // Calculating BOGO 1/2 off discount
    if (item1 < item2)
    {
        discountP = (item1 * 0.5) + item2;
    }
    else if (item2 < item1)
    {
        discountP = (item2 * 0.5) + item1;
    }
    
    // Calculate club card discount
    if (clubCard == "Y" || clubCard == "y")
    {
        discountP = discountP - (discountP * 0.10);
    }
    
    cout<<"Price after discounts: "<<discountP<<endl;
    
    
    /* Total cost calculation */
    
    taxRate = taxRate / 100;
    
    totalP = discountP + (discountP * taxRate);
    
    cout<<"Total price: "<<totalP<<endl;
    
    return 0;
}
