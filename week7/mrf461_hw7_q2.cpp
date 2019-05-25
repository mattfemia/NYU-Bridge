//
//  mrf461_hw7_q2.cpp
//  week7
//
//  Created by Matthew Femia on 5/20/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

void analyzeDividors(int num, int &outCountDivs, int &outSumDivs);

int main(){
    
    int outCountDivs = 0;
    int outSumDivs = 0;
    int num;
    
    cout<<"Please enter a positive integer: ";
    cin>>num;
    
    analyzeDividors(num, outCountDivs, outSumDivs);
    
    cout<<outCountDivs<<" "<<outSumDivs<<endl;
    
    return 0;
}

// Question 2a.
void analyzeDividors(int num, int &outCountDivs, int &outSumDivs){
    if (num % 2 == 0){
        // Determine if sqrt(num) == integer
        bool square = false;
        int divs = 0;
        while (square == false && divs <= (num / 2)){
            divs++;
            if (divs * divs == num){
                square = true;
            }
        }
        // Find dividors & sum for num where (sqrt(num)) == integer
        if (square == true){
            double root = sqrt(double(num));
            for (int count = 1; count <= int(root); count++){
                if (num % count == 0){
                    outCountDivs++;
                    outSumDivs += count;
                }
            }
        }
        // Find dividors & sum for num where (sqrt(num) != integer) but (num % 2 == 0)
        else if (square == false){
            for (int count = 1; count <= (num / 2); count++){
                if (num % count == 0){
                    outCountDivs++;
                    outSumDivs += count;
                }
            }
        }
    }
    // Find dividors & sum for num where (num % 2 != 0)
    else {
        for (int count = 1; count <= (num / 2); count++){
            if (num % count == 0){
                outCountDivs++;
                outSumDivs += count;
            }
        }
    }
}
