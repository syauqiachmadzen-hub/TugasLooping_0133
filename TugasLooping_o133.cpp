#include <iostream>
using namespace std;

// Variabel global
int n, pilihan;

// Function cek bilangan prima
bool isPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i <= n / 2) {
        if (n % i == 0) {
            return false;
        }
         i++;
    }
    return true;
}

// Function cek bilangan Fibonacci
bool isFibonacci(int n) {
     int a = 0, b = 1, c;

      while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }

    return (n == 0 || b == n);
}
   
