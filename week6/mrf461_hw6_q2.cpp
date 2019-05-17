//
//  mrf461_hw6_q2.cpp
//
//  Created by Matthew Femia on 5/15/19.
//  Copyright © 2019 Matthew Femia. All rights reserved.
//

#include <iostream>
using namespace std;

void printPineTree(int n, char symbol);

void printShiftedTriangle(int n, int m, char symbol);

int main(){
    
    int n, m;
    char symbol;
    
    cout<<"Please enter two positive integers separated by a space: "<<endl;
    cin>>n>>m;
    cout<<"Please enter a symbol character: ";
    cin>>symbol;
    
    printShiftedTriangle(n, m, symbol);
    
    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){
    
    
    for (int w=1; w <= m; w++){
        cout<<" ";
    }
    printPineTree(n, symbol);
    cout<<endl;
}

void printPineTree(int n, char symbol){
    
    for (int x=1; x <= n; x++){
        for(int j=n; j >= 1; j--){
            cout<<" ";
        }
        // Individual 'tree' structure
        for (int y=1; y <= x; y++){
            cout<<symbol<<endl;
            
            for(int j=n; j > y; j--){
                cout<<" ";
            }
            for (int z=1; z<=(2 * y); z++){
                cout<<symbol;
            }
        }
        cout<<symbol<<endl;
    }
}

