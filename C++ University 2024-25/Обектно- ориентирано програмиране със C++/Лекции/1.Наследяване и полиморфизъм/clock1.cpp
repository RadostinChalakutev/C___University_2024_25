#include <iostream>
#include <iomanip>
#include <string>
using namespace std;



class Time {
public:
    Time();
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
private:
    int hour;
    int minute;
    int second;
};

Time::Time() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    hour = ltm->tm_hour;
    minute = ltm->tm_min;
    second = ltm->tm_sec;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return minute;
}

int Time::getSecond() const {
    return second;
}

class Clock {
public:
    Clock(bool use_military);
    string getLocation() const;
    int getHour() const;
    int getMinute() const;
    int getSecond() const;
    bool isMilitary() const;
    private:
    bool military;

};
Clock::Clock(bool use_military) {
    military = use_military;


}
string Clock::getLocation() const {
    return "Local";
}
int Clock::getHour() const {
    Time now;
    int hours = now.getHour();
    if (military)return hours;
    if (hours==0)return 12;
    else if (hours>12) return hours-12;
    else return hours;
}
int Clock::getMinute() const {
    Time now;
    return now.getMinute();
}
bool Clock::isMilitary() const {
    return military;

}

int main() {
    Clock clock1(true);
    Clock clock2(false);

    bool more = true;
    while (more)
    { cout << "Military time: "
           << clock1.getHour()<< ":"
           << setw(2) << setfill('0')
           << clock1.getMinute()
           << setfill(' ') << "\n";
        cout << "am/pm time: "
             << clock2.getHour() << ":"
             << setw(2) << setfill('0')
             << clock2.getMinute()
             << setfill(' ') << "\n";

        cout << "Try again? (y/n) ";
        string input;
        getline(cin, input);
        if (input != "y") more = false;
    }
    return 0;
}
