#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;


bool prime(int n) {
    int start = sqrt(n);
    for(int  i = 2; i<= start; i++) {
        if(n%i == 0)
            return false;
    }
    return true;
}


int main() {
	long long num = 600851475143;
    int first = sqrt(num);
    for(int i = first+1; i > 0; i--) {
        if(num%i == 0 && prime(i)) {
            cout << i << endl;
            break;
        }
    }
}
