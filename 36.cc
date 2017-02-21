#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;

bool pal10(int n) {
    int m = n;
    int rot = 0;
    while (m != 0) {
        rot = (rot*10) + (m%10);
        m = m/10;
    }
    return n == rot;
}

bool pal2(int n) {
    int reversed = 0;
    int m = n;
    while (m > 0) {
        reversed = (reversed  << 1) | (m & 1);
        m = m >> 1;
    }
    return reversed  == n;
}

int main() {
    int sum = 0;

    for (int i = 0; i < 1000000; i++) {
        if (pal10(i) && pal2(i))
            sum+= i;
    }

    cout << sum << endl;
}
