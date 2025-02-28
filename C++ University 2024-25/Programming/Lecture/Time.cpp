#include <iostream>
using namespace std;

class Time {
public:
    Time();
    Time(int h, int m, int s);
    void add_seconds(long s);

    long seconds_from(Time t) const;
    int get_seconds() const;
    int get_minutes() const;
    int get_hours() const;
private:
    int hours;   /* conjecture */
    int minutes; /* conjecture */
    int seconds; /* conjecture */
};