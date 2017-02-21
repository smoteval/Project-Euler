#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

bool IsPandigital(long n) {
    vector<int> all(9,-1);
    for (int i = 0; i < 9; i++) {
        int a = n%10;
        if (a == 0) {
            return false;
        }
        n = n/10;
        if (all[a-1] == -1) {
            all[a-1] = 0;
        }
        else 
            return false;
    }
    return true;
}

int main() {
	long fn2 = 1;
    long fn1 = 1;
    long fn;
     
    long tailcut = 1000000000;
     
    int n = 2;
    bool found = false;
     
    while (!found) {
        n++;
        fn = (fn1 + fn2) % tailcut;
        fn2 = fn1;
        fn1 = fn;
     
        if (IsPandigital(fn)) {
            double t = (n * 0.20898764024997873 - 0.3494850021680094);
            if (IsPandigital((long)pow(10, t - (long)t + 8)))
                found = true;
        }
    }
    cout << n << endl;
}
