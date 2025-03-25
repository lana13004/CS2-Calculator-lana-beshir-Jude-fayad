#include "calculator.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Addition: " << add(5, 3) << endl;
    cout << "Subtraction: " << subtract(10, 4) << endl;
    cout << "Multiplication: " << multiply(6, 7) << endl;
    cout << "Division: " << divide(10, 2) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "GCD: " << gcd(48, 18) << endl;
    cout << "LCM: " << lcm(6, 8) << endl;
    cout << "Random Number: " << randomNumber(1, 100) << endl;
    return 0;
}

