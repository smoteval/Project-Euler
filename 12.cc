#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

bool divisors(long long  n) {
    int count  = 0;
    for (int i = 1; i <= n; i++) {
        if(n%i == 0)
            count++;
    }
    return count > 500;
}

int main() {
    for(int i = 10, j =1; i < 222222222 ; i++) {
        long long sum = i*(i+1);
        sum = sum/2;
        if(sum%4 == 0 && sum%9 == 0 && sum%25 == 0 && sum%7 == 0 && sum%11 == 0 &&  divisors(sum)) {
            cout << sum << endl;
            return 0;
        }
    }
}
