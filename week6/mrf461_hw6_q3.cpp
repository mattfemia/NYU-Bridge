//
//  mrf461_hw6_q3.cpp
//
//  Created by Matthew Femia on 5/15/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

double eApprox(int n);

#include <iostream>
using namespace std;

int main() {
    cout.precision(30);
    for (int n = 1; n <= 15; n++) {
        cout<<"n = "<<n<<'\t'<<eApprox(n)<<endl;
    }
    
    return 0;
}

double eApprox(int n){
    double total = 1;
    
    for (int i = (n-1); i > 0; i--){
        total = (total / i) + 1;
    }
    return total;
}

