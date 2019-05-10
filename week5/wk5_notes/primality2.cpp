// Iterating over numbers up to (number/2) -- no divisor past n/2 except number itself
#include <iostream>
using namespace std;

int main() {

}

bool isPrime(int num) {
    int countDivs = 0;

    for (int i = 1; i <= (num/2); i++) {
        if (num % i == 0)
            countDivs++;
    }

    if (countDivs == 1)
        return true;
    else
        return false;
}
