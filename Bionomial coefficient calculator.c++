#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i; // Multiply fact with the current number
    }
    return fact;
}

// Function to calculate the Binomial Coefficient
int Binomial(int n, int r) {
    int factn = factorial(n);       // Calculate n!
    int factr = factorial(r);       // Calculate r!
    int factnr = factorial(n - r);  // Calculate (n - r)!

    // Calculate Binomial Coefficient
    return factn / (factr * factnr);
}

int main() {
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    // Ensure r is not greater than n
    if (r > n) {
        cout << "Error: r cannot be greater than n." << endl;
        return 1;
    }

    // Calculate and display the Binomial Coefficient
    cout << "Binomial coefficient for n = " << n << " and r = " << r << " is: " << Binomial(n, r) << endl;

    return 0;
}
