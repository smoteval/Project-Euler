#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>

using namespace std;


bool square(int n) {
    if (n%2 == 0)
        return false;
    for(int i = 1; i < 1001; i++) {
        if (n == i*i)
            return true;
        if (n < i*i)
            return false;
    }
    return false;
}

int main() {
    int grid[1001][1002];

    int row = 1001/2;
    int col = 1001/2;
    int forward = 2;

    int direction = 0; // 0: right 1: down 2: left 3: up


    for(int i = 1, j = 0; i <= 1001*1001; i++) {
        if (square(i)) {
            grid[row][col] = i;
            forward = sqrt(i) + 1;
            i = i + 1;
            col++;
            grid[row][col] = i;
            j = 1;
            direction = 1;
            row++;
        }
        else {
            j++;
            grid[row][col] = i;
            if (j == forward) {
                direction = (direction+1)%4;
                j = 0;
            }    
            if (direction == 0) {
                col++; 
            }
            if (direction == 1) {
                row++;
            }
            if (direction == 2) {
                col--;
            }
            if (direction == 3) {
                row--;
            }
        }

    }

    long long sum = 0;

    for (int i = 0; i < 1001; i++) {
        sum = sum + grid[i][i];
        sum = sum + grid[i][1000-i];
    }

    cout << sum-1 << endl;

}
