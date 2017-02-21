#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;


int main() {
    int dup = 0;

    for (int a = 2; a <= 10; a++) {
        for (int b = 2; b <= 100; b++) {
            for (int c = 2; c <= 100; c++) {
                for (int d = b-1; d >= 2; d--) {
                    if (a < c && b > d) {
                        if (b%d == 0) {
                            int k = b/d;
                            int n = a;
                            for (int i = 2; i<= k; i++) {
                                n = n*a;
                                if (n > 100)
                                    break;
                            }
                            if (n == c) {
                                dup+= 1;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << (99*99) - dup +1 << endl;
}
