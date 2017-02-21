#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

bool isPrime(int n) {
    int m = sqrt(n);
    for (int i = 2; i <= m; i++) {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main() {
    long long count = 2;
    for (int i = 3; i <  2000000 ; i+=2) {
        if(isPrime(i)) 
            count = count+i;
    }
    cout << count << endl;
}
