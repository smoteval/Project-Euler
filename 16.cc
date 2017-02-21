#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;



int main() {
    int ans[401];
    for (int i = 0; i < 401; i++)
        ans[i] = 0;

    ans[400]=2;
    int lastindex = 400;
    int carry = 0;
    for (int i = 1; i < 1000; i++) {
        carry = 0;
        for (int j = 400; j>= lastindex; j--) {
            int a = ans[j] * 2;
            a = a + carry;
            carry = 0;
            if (a > 9) {
                carry = (a-(a%10))/10;
                a = a%10;
                if (j == lastindex) 
                    lastindex--;
            }
            ans[j] = a;
        }
    }


    int sum = 0;
    for(int i = 0; i < 401; i++) 
        sum+= ans[i];

    cout << sum << endl;
}
