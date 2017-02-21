#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

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

bool isTrun(int n, int d) {
    if (!isPrime(n))
        return false;
    for (int i = d-1; i > 0; i--) {
        int a = (pow(10, i));
        a = n%a;
        if (!isPrime(a))
            return false;
    }

    int m = n;
    while (m/10 != 0) {
        m = m/10;
        if (!isPrime(m))
            return false;
    }
    
    return true;
}

int main() {
    int sum = 0;
    for (int i = 10; i < 100; i++) {
        if (isTrun(i,2))
            sum+= i;
    }
    for (int i = 100; i < 1000; i++) {
        if (isTrun(i,3))
            sum+= i;
    }
    for (int i = 1000; i < 10000; i++) {
        if (isTrun(i,4))
            sum+= i;
    }
    for (int i = 10000; i < 100000; i++) {
        if (isTrun(i,5))
            sum+= i;
    }
    for (int i = 100000; i < 1000000; i++) {
        if (isTrun(i,6))
            sum+= i;
    }
    cout << sum << endl;
}
