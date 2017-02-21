#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

bool isPrime(int n) {
	int m = sqrt(n);
	for(int i = 2; i <=m; i++) {
		if(n%i == 0)
			return false;
	}
	return true;
}

int main() {
    for(long long i = 3, j = 1; ; i+=2) {
    	if(isPrime(i)) {
    		j++;
    	}
    	if(j == 10001) {
    		cout << i << endl;
    		break;
    	}
    }
}
