#include <iostream>
#include <string>
using namespace std;

class WeekDays {
private:
    string Days[7]; 
    int CurrentDay;      

public:
    WeekDays() {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = 0; 
    }
    WeekDays(int current) {
        Days[0] = "Sunday";
        Days[1] = "Monday";
        Days[2] = "Tuesday";
        Days[3] = "Wednesday";
        Days[4] = "Thursday";
        Days[5] = "Friday";
        Days[6] = "Saturday";
        CurrentDay = current % 7;
    }
        string getCurrentDay() {
        return Days[CurrentDay];
    }
       string getNextDay() {
        return Days[(CurrentDay + 1) % 7];
    }
        string getPreviousDay() {
        return Days[(CurrentDay - 1 + 7) % 7]; 
    }
        string getNthDayFromToday(int N) {
        return Days[(CurrentDay + N) % 7];
    }
};

int main() {
    WeekDays today; 
    cout << "Today's day: " << today.getCurrentDay() <<endl;
    cout << "Next day: " << today.getNextDay() <<endl;
	cout << "Previous day: " << today.getPreviousDay() <<endl;
    cout << "20th day from today: " << today.getNthDayFromToday(15) << endl;
    WeekDays customDay(8);  
    cout << "Custom day (after modulus): " << customDay.getCurrentDay() <<endl;
    return 0;
}

