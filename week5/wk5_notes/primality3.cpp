// Iterating over numbers up to sqrt(number) -- divisors less than sqrt divisor all have complementary divisor
// after sqrt value
#include <iostream>
#include <cmath>
using namespace std;

int main() {

}

bool isPrime(int num) {
    int countDivs = 0;

    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0)
            countDivs++;
    }

    if (countDivs == 1)
        return true;
    else
        return false;
}
