#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

long long findPindex(long long T, long long i) {
    long long least = 1;
    long long last = i;
    while (least < last) {
        long long n = (last-least)/2 + least;
        long long P = (n*(3*n-1))/2;
        if (P == T)
            return n;
        if (T < P) {
            last = n-1;
        }
        if (T > P) {
            least = n+1;
        }
    }
    return -1;
}

long long findHindex(long long T, long long i) {
    long long least = 1;
    long long last = i;
    while (least < last) {
        long long n = (last-least)/2 + least;
        long long P = n*(2*n-1);
        if (P == T)
            return n;
        if (T < P) {
            last = n-1;
        }
        if (T > P) {
            least = n+1;
        }
    }
    return -1;
}


int main() {
    for (long long i = 286; ; i++) {
        long long T = (i*(i+1))/2;
        long long j = findPindex(T, i);
        if (j != -1) {
            long long k = findHindex(T,i);
            if (k != -1) {
                cout << T << endl;
                return 0;
            }
        }
    }                    
}




