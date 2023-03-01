#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

int main() {
    int alarm_hour, alarm_minute;
    
    cout << "Enter the alarm time in 24-hour format (hh:mm): ";
    cin >> alarm_hour >> alarm_minute;
    
    while (true) {
        time_t now = time(0);
        struct tm* timeinfo = localtime(&now);
        
        cout << "Current time: ";
        cout << timeinfo->tm_hour << ":";
        cout << timeinfo->tm_min << ":";
        cout << timeinfo->tm_sec << endl;
        
        if (timeinfo->tm_hour == alarm_hour && timeinfo->tm_min == alarm_minute) {
            cout << "ALARM!" << endl;
        }
        
        this_thread::sleep_for(chrono::seconds(1));
    }
    
    return 0;
}