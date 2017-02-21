#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;

/* Fact: recurring cycle cannot be longer than denominator */

int main() {
    int highest = -1;
    int res;

    int r = 1;
    for (int i = 7; i < 1000; i++) {
        r = 1;
        for (int j = 0; j < i; j++) {
            r = r%i;
            if (j > 0 && r == 1 && j > highest) {
                highest = j;
                res = i;
                break;
            }
            if (j > 0 && r == 1)
                break;
            r = r*10;
        }
    }

    cout << res << endl;      
}
