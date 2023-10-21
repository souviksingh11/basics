#include <iostream>
using namespace std;

int Fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, result;

    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int main() {
    int n;

    cout << "Enter the value of 'n': ";
    cin >> n;

    int fibonacciNumber = Fibonacci(n);

    cout << "F(" << n << ") = " << fibonacciNumber << endl;

    return 0;
}
