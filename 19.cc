#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;


bool leapyear(int year) {
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int main() {
    int month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sundays = 0;
    int current_day = -1; // 0,..,6 days (sunday = 6)
    for (int year = 1900; year <= 2000; year++) {
        for (int month = 1; month <= 12; month++) {
            int limit = month_days[month-1];
            if (month == 2 && leapyear(year)) {
                limit++;
            }
            for (int day = 1; day <= limit ; day++) {
                current_day = (current_day+1) % 7;
                if (day == 1 && current_day == 6 && year != 1900) {
                    sundays++;
                }
            }
        }
    }

    cout << sundays << endl;
}




