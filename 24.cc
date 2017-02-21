#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;


void printMy(vector<int> &all) {
    for (int i = 0; i < 10; i++) {
        cout << all[i];
    }
    cout << endl;
}

void next(vector<int> &array) {
    // Find longest non-increasing suffix
    int i = array.size() - 1;
    while (i > 0 && array[i - 1] >= array[i])
        i--;
    // Now i is the head index of the suffix

    // Let array[i - 1] be the pivot
    // Find rightmost element that exceeds the pivot
    int j = array.size() - 1;
    while (array[j] <= array[i - 1])
        j--;

    swap(array[i-1], array[j]);

    j = array.size() - 1;
    while (i < j) {
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        i++;
        j--;
    }

}

int main() {
    vector<int> all;
    for (int i = 0; i < 10; i++) {
        all.push_back(i);
    }


    for (int i = 0; i < 1000000-1; i++) {
        next(all);
    }

    printMy(all);
}




