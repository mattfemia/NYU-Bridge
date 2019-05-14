//
//  kCombinationEx.cpp
//  testingCPP
//
//  Created by Matthew Femia on 5/13/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int num);
int kCombinations(int n, int k);

int main() {
    int k, n;
    int k_comb;
    
    cout<<"Please enter n and k (k<=n): "<<endl;
    cin>>n>>k;
    k_comb = kCombinations(n, k);
    cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
    
    return 0;
}

int kCombinations(int n, int k){
    int nFact, kFact, n_kFact;
    
    nFact = factorial(n);
    kFact = factorial(k);
    n_kFact = factorial(n-k);
    
    return nFact / (kFact*n_kFact);
}
int factorial(int num) {
    int factRes, i;
    
    factRes = 1;
    for (i=1; i<=num; i++) {
        factRes *= i;
    }
    return factRes;
}
