#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<long long> d(201,-1);

long long go(int n, int index) {
	if (n == 0)
		return 1;
    if (n < 0)
        return 0;
    if (d[n] != -1 && index == 1) {
    	return d[n];
    }
    int sum = 0;
    for (int i = index; i < 9 ; i++) {
    	if (i == 1) 
    		sum = sum + go(n-200, i);
    	if (i == 2)
    		sum = sum + go(n-100, i);
    	if (i == 3)
    		sum = sum + go(n-50, i);
    	if (i == 4)
    		sum = sum + go(n-20, i);
    	if (i == 5)
    		sum = sum + go(n-10,i);
    	if (i == 6)
    		sum = sum + go(n-5, i);
    	if (i == 7)
    		sum = sum + go(n-2, i);
    	if (i == 8)
    		sum = sum + 1;
    	
    }
    if(index == 1)
    	d[n] = sum;
    return sum;
}

int main() {
	d[0] = 1;
    long long count = go(200,1);
    cout << count << endl;
}
