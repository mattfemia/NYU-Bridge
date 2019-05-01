#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    
    while (n <= 0) {
        cout<<"Please print a positive integer: ";
        cin>>n;
    }
    // Asterisk space-increment variables
    int sp_top = 0;
    int sp_bottom = n-1;
    
    // Top half of hourglass
    for (int a=0; a<n; a++)
    {
        // Generate spaces
        for (int y=0; y<sp_top; y++)
        {
            cout<<"  ";
        }
        cout<<"*";
        for (int b=0; b<((2*n-1)-(2*a+1)); b++)
        {
            cout<<" *";
        }
        cout<<endl;
        
        sp_top++;
    }
    
    // Bottom half of hourglass
    for (int i=0; i<n; i++)
    {
        // Generate spaces
        for (int y=0; y<sp_bottom; y++)
        {
            cout<<"  ";
        }
        cout<<"*";
        
        for (int x=0; x<=(2*i - 1);x++)
        {
            cout<<" *";
        }
        cout<<endl;
        
        // Decrement space iterator
        sp_bottom--;
    }
    cout<<endl;
    
    return 0;
}
