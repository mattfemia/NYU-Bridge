//
//  mrf461_hw3_q5.cpp
//  prac
//
//  Created by Matthew Femia on 4/24/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // Initialize variables
    float lb_weight;
    float in_height;
    float kg_weight;
    float cm_height;
    float bmi;
    string status;
    
    // Prompt user for height and weight
    cout<<"Please enter weight (in pounds): ";
    cin>>lb_weight;
    
    cout<<"Please enter height (in inches): ";
    cin>>in_height;
    
    // Convert height and weight for BMI calc
    kg_weight = lb_weight * 0.453592;
    cm_height = in_height * 0.0254;
    
    // BMI calculation
    bmi = (kg_weight / pow(cm_height, 2));
    
    // Determine weight status
    if (bmi < 18.5) {
        status = "Underweight";
    }
    else if (bmi > 18.5 && bmi <= 25) {
        status = "Normal";
    }
    else if (bmi > 25 && bmi < 30) {
        status = "Overweight";
    }
    else {
        status = "Obese";
    }
    
    // BMI output statement
    cout<<"The weight status is: "<<status<<endl;
    
    return 0;
}
