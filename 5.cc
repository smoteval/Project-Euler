#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;


bool isFine(int n) {
    for (int i = 1; i <= 20; i++) {
        if(n%i != 0) 
            return false;
    }
    return true;
}


int main() {
    int res = 0;
	for (int i = 20; ; i+=20) {
        if(isFine(i)) {
            cout << i << endl;
            break;
        }
    }
}
