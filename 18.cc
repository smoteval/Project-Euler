#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;



int main() {
    int input[15][15];
    for (int i = 0; i < 15; i++)
        for (int j = 0; j < 15; j++)
            input[i][j] = 0;


    for (int i = 0; i < 15; i++) 
        for (int j = 0; j <= i; j++) {
            int a; 
            cin >> a;
            if (i == 0) {
                input[i][j] = a;
            }
            else {
                if (j == 0) {
                    input[i][j] = input[i-1][j] + a;
                }
                else  if (j == i){
                    input[i][j] = input[i-1][j-1] + a;
                }
                else {
                    int b = max(input[i-1][j-1], input[i-1][j]);
                    input[i][j] = a+b;
                }
            }

        }

    int res = 0;        
    for (int i = 0; i < 15; i++) {
        if (input[14][i] > res)
            res = input[14][i];
    }
    cout << res << endl;    
}
