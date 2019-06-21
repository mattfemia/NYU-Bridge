// Matthew Femia
// ID mrf461
// q6
//
//

#include <iostream>
using namespace std;

bool is_sum_prod_sequence(int* seq, int n){
    // int n = size of array
    // int seq = array
    bool isCorrect = false;
    
    if (n == 1){
        if (seq[n] % 2 != 0){
            if (seq[n] + 2 != seq[n+1]){
                isCorrect = false;
            }
            else {
                isCorrect = true;
            }
        }
        else {
            if (seq[n] * 2 != seq[n+1]){
                isCorrect = false;
            }
            else {
                isCorrect = true;
            }
        }
    }
    
    else {
        if (is_sum_prod_sequence(seq, n - 1) == true){
            isCorrect = true;
        }
        else {
            isCorrect = false;
        }
    }
    return isCorrect;
}
