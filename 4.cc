#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;


bool isPal(int n) {
    int t = n;
    int m = 0;
    while(t != 0) {
        m = m*10 + t%10;
        t = t/10;
    }
    return m == n;      
}


int main() {
    int res = 0;
	for (int i = 100; i < 1000; i++)
        for (int j = i; j < 1000; j++) {
            int prod = i*j;
            if (res < prod && isPal(prod))
                res = prod;
        }
    cout << res << endl;    
}
