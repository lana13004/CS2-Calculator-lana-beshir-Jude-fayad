#include "calculator.h"
#include <iostream>
#include <cstdlib>

int add(int a, int b) { 
    return a + b; 
}

int subtract(int a, int b) { 
    return a - b; 
}

int multiply(int a, int b) { 
    return a * b; 
}

double divide(int a, int b) { 
    if (b == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0;
    }
    return static_cast<double>(a) / b;
}

int factorial(int n) { 
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result; 
}

int gcd(int a, int b) { 
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) { 
    return (a * b) / gcd(a, b); 
}

int randomNumber(int min, int max) { 
    return min + (std::rand() % (max - min + 1)); 
}

