#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;

bool isPrime(int n) {
    if (n==1 || n < 0)
        return false;
    int m = sqrt(n);
    for (int i = 2; i <=m; i++) {
        if (n%i == 0)
            return false;
    }
    return true;
}

int numberOfPrimes(int a, int b) {
    int ret;
    for (int i = 0; ;i++) {
        int n = i*i + i*a +b;
        if (!isPrime(n)) {
            ret = i;
            break;
        } 

    }
    return ret;
}
int main() {
    int sofar = 0;
    int ret = 0;

    for (int i = -999; i < 999; i++) {
        for (int j = -1000; j <= 1000; j++) {
            int a = numberOfPrimes(i,j);
            if (a > sofar) {
                sofar = a;
                ret = i*j;
            }
        }
    }
    cout << ret << endl;
}
