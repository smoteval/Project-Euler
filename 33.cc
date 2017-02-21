#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;



int main() {
    int num = 1;
    int den = 1;

    for (int c = 1; c < 10; c++) {
        for (int i = 0; i < 10; i++) {
            for (int j = 1; j < 10 ; j++) {
                int n1 = c + (10*i);
                int n2 = c + (10*j);
                int n3 = i + (c*10);
                int n4 = j + (c*10);
                if (n1 < n2) {
                    if (n1*j == n2*i) {
                        num*= i;
                        den*= j;
                    }
                }
                if (n1 < n4) {
                    if (n1*j == n4*i) {
                        num*= i;
                        den*= j;
                    }
                }
                if (n3 < n2) {
                    if (n3*j == n2*i) {
                        num*= i;
                        den*= j;
                    }
                }
                if (n3 < n4) {
                    if (n3*j == n4*j) {
                        num*= i;
                        den*= j;
                    }
                }
            }
        }
    }

    for (int i = 2; i <= num; ) {
        if (num%i == 0 && den%i == 0) {
            num = num/i;
            den = den/i;
        }
        else
            i++;
    }

    cout << den << endl;
}
