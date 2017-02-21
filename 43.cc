#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

void allperms(vector<vector<int> > &ret, int begin, vector<int> &nums) {
    if(begin >= nums.size()) {
        ret.push_back(nums);
        return;
    }
    for(int i = begin; i < nums.size(); i++) {
        swap(nums[begin],nums[i]);
        allperms(ret, begin+1, nums);
        swap(nums[begin],nums[i]);
    }
}

vector<vector<int> > permute(vector<int>& nums) {
    vector<vector<int> > ret;
    allperms(ret,0,nums);
    return ret;
}

int main() {
    int primes[7] = {2, 3, 5, 7, 11, 13, 17};
    vector<vector<int> > perms;
    vector<int> digits(10,0);
    for (int i = 0; i < 10; i++) {
        digits[i] = i;
    }

    perms = permute(digits);
    long long sum = 0;

    for (int i = 0; i < perms.size(); i++) {
        if (perms[i][0] != 0) {
            bool flag = true;
            for (int j = 1; j + 2 < 10; j++) {
                int a = 100*perms[i][j] + 10* perms[i][j+1] + perms[i][j+2];
                if (a%primes[j-1] != 0)
                    flag = false;

                if (j == 7 && flag) {
                    long long n = 0;
                    for(int k = 0; k < 10; k++) {
                        n = n + pow(10, 9-k)*perms[i][k];
                    }
                    sum+= n;
                }
            }
        }

    }
    cout << sum << endl;                                  
}
