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
bool isPerfect(int num);
void perfectAmicable(int num);

int main(){
    
    int num = 0;
    
    // Error check for user-input
    while (num < 2) {
        cout<<"Please enter a positive integer greater than 1: ";
        cin>>num;
    }
    
    perfectAmicable(num);
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
        for (int count = 1; count <= floor(double(num / 2)); count++){
            if (num % count == 0){
                outCountDivs++;
                outSumDivs += count;
            }
        }
    }
}

// Question 2b.
bool isPerfect(int num){
    int countNums = 0;
    int sumNums = 0;
    
    analyzeDividors(num, countNums, sumNums);
    
    // Determine if the number is a perfect number
    if (sumNums == num){
        return true;
    }
    else {
        return false;
    }
}

// Question 2c.
void perfectAmicable(int num){
    
    // Find and print out the perfect numbers
    cout<<"Perfect numbers: ";
    for (int counter = 2; counter <= num; counter++){
        
        if (isPerfect(counter) == true){
            cout<<counter<<" ";
        }
    }
    cout<<endl;
    
    // Find and print out the amicable number pairs
    for (int counter = 2; counter <= num; counter++){
        int count1 = 0;
        int sum1 = 0;
        
        analyzeDividors(counter, count1, sum1);
        if (sum1 <= num){
            int sum2 = 0;
            int count2 = 0;
            
            analyzeDividors(sum1, count2, sum2);
            if ( (counter != sum1) && (sum2 == counter) && (counter < sum1) ){
                cout<<"Amicable pair: "<<"("<<counter<<", "<<sum1<<")"<<endl;
            }
        }
    }
}
