#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;

int fac[10];

bool factSum(int n) {
    int m = n;
    int sum = 0;
    while (m != 0) {
        sum = sum + fac[m%10];
        if (sum > n)
            return false;
        m = m/10;
    }
    return sum == n;
}

int main() {
    
    fac[0] = 1;
    for (int i = 1; i < 10; i++) {
        fac[i] = i*fac[i-1];
    } 


    int sum = 0;
    for (int i = 11; i < 100000; i++) {
        if (factSum(i))
            sum = sum + i;
    }

    cout << sum << endl;
}
