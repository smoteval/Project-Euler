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
    int maxcount = 0;
    long long ret = 0;
    for (int i = 2; i < 1000000  ; i++) {
        long long sum = 0;
        if (isPrime(i)) {
            sum+= i;
            int count = 1;
            for (int j = i+1; sum +j < 1000000 ;j++) {
                if (isPrime(j)) {
                    sum+= j;
                    count++;
                }
            }
            if (isPrime(sum)) {
                if (count > maxcount) {
                    ret = sum; 
                    maxcount = count;
                }
                    
            }

        }
    }
    cout << ret << endl;                             
}
