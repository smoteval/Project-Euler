#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;


bool digit5(int n) {
    int m = n;
    int sum = 0;
    while (m != 0) {
        sum = sum + pow(m%10,5);
        m = m/10;
        if (sum > n)
            return false;
    }
    return sum == n;
}

int main() {
    int sum = 0;
    for (int i = 11; i < 1000000 ;i++) {
        if (digit5(i)) {
            sum = sum + i;
        }
    }
    cout << sum << endl;
}
