// Code Example:
#include <iostream>

int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 5;
    int result = factorial(n);
    std::cout << "Factorial of " << n << " is " << result << std::endl;
    return 0;





    
}