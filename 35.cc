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

bool circularP(int n, int d) {
    if(!isPrime(n))
        return false;
    if (n < 10)
        return true;
    int m = n;
    for (int i = 1; i <= d-1; i++) {
        m = pow(10, d-1)*(m%10) + (m/10);
        if (!isPrime(m))
            return false;
    }  
    return true;
}

int main() {
    int count = 0;
    for (int i = 2; i < 1000000; i++) {
        if (i < 10 && isPrime(i))
            count++;
        else if (i > 10 && i < 100 && circularP(i,2))
            count++;
        else if (i > 100 && i < 1000 && circularP(i,3))
            count++;
        else if (i > 1000 && i < 10000 && circularP(i,4))
            count++;
        else if (i > 10000 && i < 100000 && circularP(i,5))
            count++;
        else if (i > 100000 && i < 1000000 && circularP(i,6))
            count++;
    }

    cout << count << endl;
}
