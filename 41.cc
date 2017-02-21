#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;

bool isPrime(int n) {
    int m = sqrt(n);
    for (int i = 2; i <= m; i++) {
        if (n%i == 0)
            return false;
    }
    return true;
}

bool pan(long long n) {
    vector<int> all(10, 0);
    int digits = 0;
    while (n != 0) {
        int r = n%10;
        if (all[r] == 1 || r == 0)
            return false;
        all[r] = 1;
        n = n/10;
        digits++;
    }
    for (int i = 1; i <= digits; i++) {
        if (all[i] != 1)
            return false;
    }
    return true;
}

int main() {
    long long i;
    long long candidate;

    for(i = 2143; i <= 7654321; i++) {
        if (isPrime(i)) {
            if(pan(i))
                candidate = i;
        }
    }

    cout << candidate << endl;
}
