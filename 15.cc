#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;



int main() {
    long long top_right[20][20];
    long long bot_left[20][20];
    long long diagonal[20][20];
    for(int i = 0; i < 20; i++) {
        top_right[0][i] = 1;
        bot_left[i][0] = 1;
        diagonal[0][i] = i + 2;
        diagonal[i][0] = i + 2;
    }
    diagonal[0][0] = 2;
    for (int i = 1; i < 20; i++) {
        for (int j = 1; j < 20; j++) {
            top_right[i][j] = diagonal[i-1][j-1] + top_right[i-1][j];
            bot_left[i][j] = diagonal[i-1][j-1] + bot_left[i][j-1];
            diagonal[i][j] = top_right[i][j] + bot_left[i][j];
        }
    }
    cout << diagonal[19][19] << endl;
}
