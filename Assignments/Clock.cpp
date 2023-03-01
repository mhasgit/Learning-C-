#include <iostream>

using namespace std;

class ClockType
{

    int hours;
    int minutes;
    int seconds;

public:
    void setTime(int hr, int mins, int sec)
    {
        if (hr >= 0 && hr <= 23)
        {
            hours = hr;
        }
        else
        {
            hours = 0;
        }
        if (mins >= 0 && mins <= 59)
        {
            minutes = mins;
        }
        else
        {
            minutes = 0;
        }
        if (sec >= 0 && sec <= 59)
        {
            seconds = sec;
        }
        else
        {
            seconds = 0;
        }
    }

    void printTime()
    {
        cout << "time is: " << hours << " : " << minutes << " : " << seconds << endl;
    }

    void incrementSeconds()
    {
        seconds++;
    }

    void incrementMinutes()
    {
        if (minutes == 59)
        {
            minutes = 0;

            if (hours == 23)
            {
                hours = 0;
            }

            else
            {
                hours++;
            }
        }

        else
        {
            minutes++;
        }
    }

    void incrementHours()
    {
        hours == 23 ? 0 : hours++;
    }

    bool equalTime(ClockType otherClock)
    {
        if (hours == otherClock.hours && minutes == otherClock.minutes && seconds == otherClock.seconds)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    ClockType yourClock, myClock;

    myClock.setTime(22, 10, 58);
    cout << "My clock ";
    myClock.printTime();
    cout << "******************************" << endl << endl;
    yourClock.setTime(20, 45, 30);
    cout << "Your clock ";
    yourClock.printTime();
    cout << "******************************" << endl << endl;

    cout << "Comparing time of both clocks" << endl << endl;

    if (myClock.equalTime(yourClock))
    {
        cout << "Both times are Equal" << endl;
    }
    else
    {
        cout << "Both times are Unequal" << endl;
    }

    cout << "******************************" << endl << endl;
    cout << "Setting new time for my clock" << endl << endl;

    myClock.setTime(20, 45, 59);
    cout << "My clock new ";
    myClock.incrementSeconds();
    myClock.printTime();
    cout << endl;
    if (myClock.equalTime(yourClock))
    {
        cout << "Both times are Equal" << endl;
    }
    else
    {
        cout << "Both times are Unequal" << endl;
    }
    cout << "******************************" << endl << endl;

    cout << "Incrementing your clock time by 1 hr and 1 sec" << endl << endl;
    yourClock.incrementHours();
    yourClock.incrementSeconds();
    cout << "After incrementing new ";
    yourClock.printTime();
    return 0;
}
