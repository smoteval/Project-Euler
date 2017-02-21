#include <iostream>
#include <string>
#include <vector>

using namespace std;




int main() {
    int count = 0;
    for (int i = 1; i < 1000; i++) {
        if (i%3 == 0 || i %5 == 0)
            count = count + i;
    }
    cout << count << endl;
}
