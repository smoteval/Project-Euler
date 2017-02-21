#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int primes[200];

bool isPrime(int n) {
    if (n == 1)
        return false;
    int m = sqrt(n);
    for (int i = 2; i <= m; i++) {
        if (n%i == 0)
            return false;
    }
    return true;
}

bool prime4(int n) {
    int count = 0;
    for (int i = 0; i < 200 && primes[i] < n; i++) {
        if (n%(primes[i]) == 0) {
            count++;
        }
    }
    return count == 4;
}

int main() {
    for (int i = 2, j = 0; j < 200; i++) {
        if (isPrime(i)) {
            primes[j] = i;
            j++; 
        }
    }
    for (int i = 644; ; i++) {
        if (prime4(i) && prime4(i+1) && prime4(i+2) && prime4(i+3)) {
            cout << i << endl;
            return 0;
        }
    }                               
}