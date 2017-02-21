#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;



int main() {
    for (int i = 999; i > 0; i--) {
        int rem = 1000-i;
        for (int  j = rem-1; j > 0; j--) {
            int i2 = rem-j;
            int a2 = i2*i2;
            int b2 = j*j;
            int c2 = i*i;
            if(c2 == a2+b2) {
                cout << i*i2*j << endl;
                break;
            }
        }
    }
}
