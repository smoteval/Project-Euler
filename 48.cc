#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;




int main() {
    unsigned long long int sum = 10405071317;
    for (int i = 11; i <= 1000; i++) {
        unsigned long long curr = i;
        for (int j = 2; j <= i; j++) {
            curr = curr*i;
            curr = curr % 100000000000;
        }
        sum = sum + curr;
        sum = sum % 1000000000000;
    }
    sum = sum % 10000000000;
    cout << sum << endl;                              
}
