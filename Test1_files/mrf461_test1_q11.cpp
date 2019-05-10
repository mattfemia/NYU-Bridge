//Matthew Femia
//mrf461

#include <iostream>
using namespace std;

int main(){

    char inLetter;

    cout<<"Please enter a lower-case letter: "<<endl;
    cin>>inLetter;


    // Iterate through letters
    for (int letter = 97; letter <= int(inLetter) + 1; letter++){
        cout<<" ";

        int difference = (inLetter - letter);

        // Print out correct amount of spaces
        for (int counter = 1; counter <= difference; counter++) {
            cout<<char(letter);
        }
            // Output number of letters corresponding to value
            for (int counter = 1; counter <= difference; counter++) {
                cout<<char(letter);
            }

        cout<<endl;
    }


    return 0;
}
