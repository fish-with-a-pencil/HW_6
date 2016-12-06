//
//  Jessica McMahon
//  Calendar.h
//

#ifndef __HW_6__Calendar__
#define __HW_6__Calendar__

#include <stdio.h>
#include <string>
using namespace std;

class CalendarDate {
private:
     int day;
     static string Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec;
public:
     CalendarDate();
     CalendarDate(string, int);
     CalendarDate operator ++();
     CalendarDate operator ++(int);
     CalendarDate operator --();
     CalendarDate operator --(int);
     void PrintCalendarDate(int);
     int getDay();
};

#endif /* defined(__HW_6__Calendar__) */
