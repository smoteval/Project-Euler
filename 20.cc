#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;



int main() {
    vector<int> res(401, 0);


    res[400] = 1;
    int lastindex = 400;
    
    int carry = 0;
    for (int i = 1; i <= 100; i++) {
        for (int j = 400; j>= lastindex; j--) {
            int a = res[j]*i;
            a = a + carry;
            carry = 0;
            if (a > 9) {
                carry = a/10;
                a = a%10;
                if (j == lastindex)
                    lastindex--;
            }
            res[j] = a;
        }
    }

    int sum = 0;
    for (int i = 0; i < 401; i++)
        sum+= res[i];

    cout << sum << endl;        
}
