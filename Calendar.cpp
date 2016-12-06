//  Jessica McMahon
//  Calendar.cpp
//
//

#include "Calendar.h"
#include <string>
#include <iostream>
using namespace std;

//  Static members
string CalendarDate::Jan;
string CalendarDate::Feb;
string CalendarDate::Mar;
string CalendarDate::Apr;
string CalendarDate::May;
string CalendarDate::Jun;
string CalendarDate::Jul;
string CalendarDate::Aug;
string CalendarDate::Sep;
string CalendarDate::Oct;
string CalendarDate::Nov;
string CalendarDate::Dec;

//  Default constructor; initializes the proper values for the static members
CalendarDate::CalendarDate() {
     day = 1;
     Jan = "January ";
     Feb = "February ";
     Mar = "March ";
     Apr = "April ";
     May = "May ";
     Jun = "June ";
     Jul = "July ";
     Aug = "August ";
     Sep = "September ";
     Oct = "October ";
     Nov = "November ";
     Dec = "December ";
}

//  two parameter constructor that converts the month and day of the month
//    into an int out of 365
CalendarDate::CalendarDate(string m, int d) {
     if (d <=0 ) {
          cout << "Error.  Invalid day.\n\n";
          day = 1;
          return;
     }
     if (m == Jan) {
          if (d > 31) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d;
     }
     else if (m == Feb) {
          if (d > 28) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 31;
     }
     else if (m == Mar) {
          if (d > 31) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 59;
     }
     else if (m == Apr) {
          if (d > 30) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 90;
     }
     else if (m == May) {
          if (d > 31) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 120;
     }
     else if (m == Jun) {
          if (d > 30) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 151;
     }
     else if (m == Jul) {
          if (d > 31) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 181;
     }
     else if (m == Aug) {
          if (d > 31) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 212;
     }
     else if (m == Sep) {
          if (d > 30) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 243;
     }
     else if (m == Oct) {
          if (d > 31) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 273;
     }
     else if (m == Nov) {
          if (d > 30) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 304;
     }
     else if (m == Dec) {
          if (d > 31) {
               cout << "Error. Invalid Day.\n\n";
               day = 1;
               return;
          }
          day = d + 334;
     }
          else {
               cout << "Error.  Invalid Month.\n\n";
               day = 1;
          }
     return;
}

//  overloaded prefix increment
//  uses an if else to check if the date is 365 and needs to be rolled over to
//    one. if not, simply increments the day.  returns the incremented value
CalendarDate CalendarDate::operator++() {
     if (day == 365)
          day = 1;
     else
          day = day +1;
     return *this;
}

//  overloaded postfix increment
//  uses an if else to check if the date is 365 and needs to be rolled over to
//    one. if not, simply increments the day. returns the value pre-increment.
CalendarDate CalendarDate::operator++(int) {
     CalendarDate temp;
     
     temp.day = day;
     if (day == 365)
          day = 1;
     else
          day = day +1;
     return temp;
}

//  overloaded prefix decrement
//  uses an if else to check if the date is 1 and needs to be rolled over to
//    365. if not, simply decrements the day. returns the decremented value
CalendarDate CalendarDate::operator--() {
     if (day == 1)
          day = 365;
     else
          day = day-1;
     return *this;
}

//  overloaded postfix decrement
//  uses an if else to check if the date is 1 and needs to be rolled over to
//    365. if not, simply decrements the day. returns the value pre decrement.
CalendarDate CalendarDate::operator--(int) {
     CalendarDate temp;
     
     temp.day = day;
     if (day == 1)
          day = 365;
     else
          day = day-1;
     return temp;
}

//  PRINT
//  input: an integer representing the day out of 365
//  action: assigns input int to the member int day, then uses a nested if else
//    to convert the day into month-day format and prints
//  output: none
void CalendarDate::PrintCalendarDate(int d) {
     day = d;
     
     if (day <=0 || day > 365) {
          cout << "Error.  Invalid day.\n\n";
          return;
     }
     if (day <= 31)
          cout << Jan << day << endl;
     else if (day <= 59)
          cout << Feb << day-31 << endl;
     else if (day <= 90)
          cout << Mar << day-59 << endl;
     else if (day <= 120)
          cout << Apr << day-90 << endl;
     else if (day <= 151)
          cout << May << day-120 << endl;
     else if (day <= 181)
          cout << Jun << day-151 << endl;
     else if (day <= 212)
          cout << Jul << day-181 << endl;
     else if (day <= 243)
          cout << Aug << day-212 << endl;
     else if (day <= 273)
          cout << Sep << day-243 << endl;
     else if (day <= 304)
          cout << Oct << day-273 << endl;
     else if (day <= 334)
          cout << Nov << day-304 << endl;
          else
               cout << Dec << day-334 << endl;
}

//  Accessor function: getDay
//  returns the day out of 365
int CalendarDate::getDay() {
     return day;
}


