#include <math.h>
#include <iostream>
using namespace std;

void get_divisors(int n);

int main() {
    int n;

    cout << "Enter a number and press ENTER: ";
    cin >> n;

    get_divisors(n);

    cout << endl;
    system("PAUSE");
    return 0;
}

// Get divisors function
//  This function prints all the divisors of n,
//  by finding the lowest divisor, i, and then
//  rerunning itself on n/i, the remaining quotient.

void get_divisors(int n) {
     int i;
     double sqrt_of_n = sqrt((double) n);

     for (i = 2; i <= sqrt_of_n; i++)
         if (n % i == 0) {        // If i divides n evenly,
            cout << i << ", ";    //   Print i,
            get_divisors(n / i);  //   Factor n/i,
            return;               //   and exit.
         }

     // If no divisor is found, then n is prime;
     //  Print n and make no further calls.

     cout << n;   
}                        



