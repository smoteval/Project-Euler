#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;


int main() {
    int sum = 1;
    int count = 9;
    for (int i = 10; i < 100; i++) {
        if (count < 10 && count + 2 >= 10) {
            int k = count+2-10;
            int temp = i;
            for(int r = 0; r < k; r++) {
                temp = temp/10;
            }
            sum*= temp%10;
        }
        if (count < 100 && count +2 >= 100) {
            int k = count+2-100;
            int temp = i;
            for(int r = 0; r < k; r++) {
                temp = temp/10;
            }
            sum*= temp%10;
        }
        count+=2;
    }

    for (int i = 100; i < 1000; i++) {
        if (count < 1000 && count + 3 >= 1000) {
            int k = count+3-1000;
            int temp = i;
            for(int r = 0; r < k; r++) {
                temp = temp/10;
            }
            sum*= temp%10;
        }
        count+=3;
    }

    for (int i = 1000; i < 10000; i++) {
        if (count < 10000 && count + 4 >= 10000) {
            int k = count+4-10000;
            int temp = i;
            for(int r = 0; r < k; r++) {
                temp = temp/10;
            }
            sum*= temp%10;
        }
        count+=4;
    }

    for (int i = 10000; i < 100000; i++) {
        if (count < 100000 && count + 5 >= 100000) {
            int k = count+5-100000;
            int temp = i;
            for(int r = 0; r < k; r++) {
                temp = temp/10;
            }
            sum*= temp%10;
        }
        count+=5;
    }

    for (int i = 100000; i < 1000000; i++) {
        if (count < 100000 && count + 6 >= 1000000) {
            int k = count+6-1000000;
            int temp = i;
            for(int r = 0; r < k; r++) {
                temp = temp/10;
            }
            sum*= temp%10;
        }
        count+=6;
    }

    cout << sum << endl;
}
