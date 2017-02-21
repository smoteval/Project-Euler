#include <iostream>
#include <string>
#include <vector>

using namespace std;




int main() {
	int count = 0;
    int first = 1;
    for (int i = 1 ; i < 4000000; ) {
    	if(i%2 == 0)
    		count = count+i;
    	int temp = i;
    	i = i + first;
    	first = temp;
    }
    cout << count << endl;
}
