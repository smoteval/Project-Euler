#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> all(29000, -1);

int d(int n) {
    if(all[n] != -1)
        return all[n];
    int count = 0;
    for (int i = 1; i < n/2+1; i++) {
        if(n%i == 0)
            count = count + i;
    }
    all[n] = count;
    return count;
}

bool ab(int n) {
    return d(n) > n;
}

bool can(int n) {
    for (int i = 1; i < n-1; i++) {
        int j = n - i;
        if(ab(i) && ab(j))
            return true;
    }
    return false;
}


int main() {
    int sum = 23*12;
    for (int i = 28123; i > 24; i--) {
        if(!can(i))
            sum = sum + i;
    }
    cout << sum << endl;
}
