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

int main() {
    bool flag = false;
    for (int i = 9 ; ; i+=2) {
        if (!isPrime(i)) {
            flag = true;
            for (int j = 1; i-2*j*j > 0 ; j++) {
                int a = i -  2*j*j;
                if (isPrime(a)) {
                    flag = false;
                }
            }
            if (flag) {
                cout << i << endl;
                return 0;
            }
        }
    }                               
}
