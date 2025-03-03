#include <iostream>
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

