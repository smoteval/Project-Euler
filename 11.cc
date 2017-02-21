#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;



int main() {
    int input[20][20];

    for (int i = 0; i < 20; i++) {
    	for (int j = 0; j < 20; j++) {
    		int a;
    		cin >> a;
    		input[i][j] = a;
    	}
    }


    int number = 0;

    for (int i = 0; i < 20; i++) {
    	for (int j = 0; j < 20; j++) {
    		if (j+30 < 20) {
    			int a =  input[i][j]*input[i][j+1]*input[i][j+2]*input[i][j+3];
    			if (a > number)
    				number = a;
    			int b = input[j][i]*input[j+1][i]*input[j+2][i]*input[j+3][i];
    			if (b > number)
    				number = b;
    		}

    		if (i+3 < 20 && j+3 < 20) {
    			int a = input[i][j]*input[i+1][j+1]*input[i+2][j+2]*input[i+3][j+3];
    			if (a > number)
    				number = a;
    		}

    		if (i-3 >=0  && j+3 < 20) {
    			int a = input[i][j]*input[i-1][j+1]*input[i-2][j+2]*input[i-3][j+3];
    			if (a > number)
    				number = a;
    		}
    	}
    }

    cout << number << endl;
}
