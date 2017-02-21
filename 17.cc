#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;


int count1(int n) {
    switch(n) {
        case 0:
            return 0;
        case 1:
            return 3;
        case 2:
            return 3;
        case 3:
            return 5;
        case 4:
            return 4;
        case 5:
            return 4;
        case 6:
            return 3;
        case 7:
            return 5;
        case 8:
            return 5;
        case 9:
            return 4;
        case 10:
            return 3;
        case 11:
            return 6;
        case 12:
            return 6;
        case 13:
            return 8;
        case 14:
            return 8;
        case 15:
            return 7;
        case 16:
            return 7;
        case 17:
            return 9;
        case 18:
            return 8;
        case 19:
            return 8;
        case 20:
            return 6;
    }
}

int count2(int n) {
    int i = n/10;
    int k = n % 10;

    switch(i) {
    case 2:
        return 6 + count1(k);
    case 3:
        return 6 + count1(k);
    case 4:
        return 5 + count1(k);
    case 5:
        return 5 + count1(k);
    case 6:
        return 5 + count1(k);
    case 7:
        return 7 + count1(k);
    case 8:
        return 6 + count1(k);
    case 9:
        return 6 + count1(k);
    }
}

int count3(int n) {
    int i = n/100;
    int k = count1(i) + 10;
    if(n % 100 == 0)
        return k-3;

    if(n % 100 > 20)
        return k + count2(n % 100);
    return k + count1(n % 100);    
}

int count(int n) {
    if (n <= 20) {
        return count1(n);
    }
    if (n <= 99) {
        return count2(n);
    }
    return count3(n);
}

int main() {
    int sum = 11; //one thousand
    for (int i =1; i < 1000; i++) {
        sum+= count(i);
    }
    cout << sum << endl;
}




