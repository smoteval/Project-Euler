#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;


int solutions(int p) {
    int count = 0;
    for (int i = p-2; i >= 1; i--) {
        for (int j = 1; j + i < p ; j++) {
            int k = p - i - j;
            if ( i*i == (k*k + j*j) )
                count++;
        }
    }
    return count;
}


int main() {
    int ret = 0;
    int curr = 0;
    for (int p = 10; p <= 1000; p++) {
        int a = solutions(p);
        if (a > curr) {
            curr = a;
            ret = p;
        }
    }

    cout << ret << endl;
}
