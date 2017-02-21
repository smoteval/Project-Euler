#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;





int main() {
    int res1 = 0;
    int res2;
    for(int i = 1; i <= 100; i++) {
        res1 = res1 + (i*i);
        res2 = res2+i;
    }
    cout << res2*res2 - res1 << endl;
}
