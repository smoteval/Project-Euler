#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;



int main() {
    vector<int> first(1000, 0);
    vector<int> second(1000, 0);

    first[999] = 1;
    second[999] = 1;

    int lastindex = 999;
    int carry = 0;
    
    int i;
    for(i = 2; lastindex != 0 ; i++) {
        for(int j = 999; j >= lastindex && lastindex >= 0; j--) {
            int a = first[j]+second[j];
            a = a + carry;
            carry = 0;
            if (a > 9) {
                carry = a/10;
                a = a%10;
                if (j == lastindex)
                    lastindex--;
            }
            first[j] = second[j];
            second[j] = a;
        }
    }

    cout << i << endl;       
}
