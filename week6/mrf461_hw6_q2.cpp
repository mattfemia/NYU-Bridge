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
    
    printPineTree(n, symbol);
    cout<<endl<<endl;
    printShiftedTriangle(n, m, symbol);
    
    return 0;
}

void printShiftedTriangle(int n, int m, char symbol){
    // Shifted spaces for top of triangle
    for(int j=0; j <= (m + n -2); j++){
        cout<<" ";
    }
    // Top of tree
    for (int y=1; y < n; y++){
        cout<<symbol<<endl;
        // Spaces for bottom rows of triangle
        for(int j=n+m; j > y+1; j--){
            cout<<" ";
        }
        // Bottom row of triangle
        for (int z=1; z<=(2 * y); z++){
            cout<<symbol;
        }
    }
    cout<<symbol<<endl;
}

void printPineTree(int n, char symbol){
    // Redefine parameters
    int spaces = n - 1;
    int triangles = n;
    
    // Print 'n' number of triangles in tree
    for (int i = 1; i <= n; i++){
        printShiftedTriangle(triangles - 1, spaces, symbol);
        
        // Increase triangle while decrease spaces
        spaces--;
        triangles++;
    }
    cout<<endl;
}
