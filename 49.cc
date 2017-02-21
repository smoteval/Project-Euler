#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

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

bool perm(int a, int b) {
    vector<int> digits1(10, 0);
    vector<int> digits2(10, 0);
    while (a != 0) {
        int i = a%10;
        digits1[i]++;
        a = a/10;
    }

    while (b != 0) {
        int i = b%10;
        digits2[i]++;
        b = b/10;
    }

    for (int i = 0; i < 10; i++) {
        if (digits1[i] != digits2[i]) 
            return false;
    }
    return true;
}

int main() {
    for (int a = 1000; a < 10000; a++) {
        for (int n = 1; n+(2*a) < 10000; n++) {
            if (a != 1487 && perm(a, a+n) && perm(a+n, a+n+n) && isPrime(a) && isPrime(a+n) && isPrime(a+n+n)) {
                cout << a << a+n << a+n+n << endl;
            } 
        }
    }                             
}
