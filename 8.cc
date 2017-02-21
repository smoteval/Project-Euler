#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;


int main() {
    char input[1000];
    for(int i = 0; i < 1000; i++) {
        char c;
        cin >> c;
        input[i] = c;
    }
    long long ret = 0;
    for (int i = 0; i < 1000-13; i++) {
        long long res = 1;
        for (int j = i; j < i+13; j++) {
            res = res * (input[j] - '0'); 
        }
        if(res > ret) {
            ret = res;
        }
    }
    cout << ret << endl;
}
