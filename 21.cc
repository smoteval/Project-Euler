#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> all(10000, -1);

int d(int n) {
    if(all[n] != -1)
        return all[n];
    int count = 0;
    for (int i = 1; i < n; i++) {
        if(n%i == 0)
            count = count + i;
    }
    all[n] = count;
    return count;
}

bool yes(int a, int b) {
    return d(a) == b && d(b) == a;
}

int main() {
    int sum = 0;
    for (int i = 1; i < 10000; i++) {
        for (int j = i+1; j < 10000; j++) {
            if (yes(i, j))  
                sum = sum + i + j;
        }
    }
    cout << sum << endl;
}
