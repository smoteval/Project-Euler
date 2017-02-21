#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;



bool pan(int a, int n) {
    vector<int> all(10, 0);
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int curr = a*i;
        while (curr != 0) {
            int r = curr%10;
            if (all[r] == 1 || r == 0)
                return false;
            count++;
            all[r] = 1;
            curr = curr/10;
        }
    }
    return count == 9;
}

int main() {

    int num = 0;
    int n = 0;
    for (int  i = 1; i < 10000; i++) {
        for (int j = 2; j <= 10; j++) {
            if (pan(i,j)) {
                num = i;
                n = j;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << num*i;
    }
    cout << endl;
}
