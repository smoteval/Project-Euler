#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

long long pen(int n) {
	return (n*(3*n-1))/2;
}


bool isPen(int x) {
    double t = (sqrt(1.0 + 24.0 * x) + 1.0) / 6.0;
    return  t == int(t);
}





int main() {
	for (int i = 1; ; i++) {
		long long p3 = pen(i);
		for (int j = i-1; j > 1; j--) {
			long long p2 = pen(j);
			if (isPen(p3-p2)) {
				if (isPen(p3+p2)) {
					cout << p3-p2 << endl;
					return 0;
				}
			}
		}
	}
}
