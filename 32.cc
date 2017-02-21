#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;


bool pan(int i, int j) {
    vector<int> digs(10, 0);

    int a = i;
    while (a != 0) {
        int r = a%10;
        if (digs[r] != 0 || r == 0)
            return false;
        digs[r] = 1;
        a = a/10;
    }

    a = j;
    while (a != 0) {
        int r = a%10;
        if (digs[r] != 0 || r == 0)
            return false;
        digs[r] = 1;
        a = a/10;
    }

    a = i*j;
    while (a != 0) {
        int r = a%10;
        if (digs[r] != 0 || r == 0 )
            return false;
        digs[r] = 1;
        a = a/10;
    }

    for (int k = 1; k < 10; k++) {
        if (digs[k] != 1)
            return false;
    }

    return true;

}

int main() {
    vector<int> all;

    for (int i = 1; i < 1000; i++) {
        for (int j = i+1; j < 2000; j++) {
            if (pan(i,j)) {
                all.push_back(i*j);
            }
        }
    }

    sort(all.begin(), all.end());

    int sum = 0;
    for (int i = 0; i < all.size(); i++) {
        if (i == all.size()-1 || all[i] != all[i+1]) 
            sum+= all[i];
    }

    cout << sum << endl;

}
