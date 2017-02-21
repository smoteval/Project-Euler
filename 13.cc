#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;



int main() {
    string input[100];
    int ret[50];

    for (int i = 0; i < 100; i++) {
        string s;
        getline(cin, s);
        input[i] = s;
    }
    
    int carry = 0;
    for (int i = 49; i >= 0; i--) {
        int sum = 0;
        for (int j = 0; j < 100; j++) {
            int a = input[j][i] - '0';
            sum = sum +  a;
        }
        sum = sum + carry;
        int res = sum%10;
        carry = sum/10;
        ret[i] = res; 
    }
    cout << carry;
    for(int i = 0; i < 8; i++) {
        cout << ret[i];
    }
    cout << endl;
}
