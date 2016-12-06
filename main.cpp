//  Jessica McMahon
//  Homework 6: Programming challenges and operator overloading
//    Create a program that converts an int into it's corresponding month and
//    day of the year.  Overload the pre and postfix increment and decrement
//    to roll over on 365 back to one and on one back to 365.
//

#include <iostream>
#include <string>
#include "Calendar.h"
using namespace std;

int main(int argc, const char * argv[]) {
     CalendarDate cal, a;
     int entry;
     string month;
     char yn;
     
     //  Test 1: converts an int from 1 - 365 into a month and a day and prints
     cout << "Jessica McMahon" << endl << "Homework 6\n\n";
     do {
          cout << "Enter a day between 1 and 365: ";
          cin >> entry;
          cal.PrintCalendarDate(entry);
          cout << "Continue test 1? Y/N: ";
          cin >> yn;
     }while(yn != 'n' && yn != 'N');
     
     //  Test 2: converts a month and a day into an int between 1 and 365 and
     //    then converts it back to check for accuracy
     do {
          cout << "Enter a month.  Capitalize the first letter. ";
          cin >> month;
          cout << "Enter a day for that month. ";
          cin >> entry;
          cal = CalendarDate(month+" ", entry);
          cal.PrintCalendarDate(cal.getDay());
          cout << "Continue test 2? Y/N: ";
          cin >> yn;
     }while (yn != 'n' && yn != 'N');
     //  Test 3: a for loop that tests postfix incrementation.
     cout << endl;
     cal = CalendarDate("December ", 25);
     for (int i=0; i < 15; i++) {
          a = cal++;
          cout << "the value of a = cal++:\n";
          a.PrintCalendarDate(a.getDay());
          cout << "the value of cal\n";
          cal.PrintCalendarDate(cal.getDay());
          cout << endl;
     }
     cout << endl << "~~~~~~~" << endl <<endl;
     cout << "End of test 3: postfix increment.";
     cout << endl << "~~~~~~~" << endl <<endl;
     
     //  Test 4: a for loop that tests postfix decrementation.
     for (int i=0; i < 15; i++) {
          a = cal--;
          cout << "Value of a = cal--:\n";
          a.PrintCalendarDate(a.getDay());
          cout << "Value of cal:\n";
          cal.PrintCalendarDate(cal.getDay());
          cout << endl;
     }
     cout << endl << "~~~~~~~" << endl <<endl;
     cout << "End of test 4: postfix decrement.";
     cout << endl << "~~~~~~~" << endl <<endl;
     
     //  Test 5: a for loop that tests prefix incrementation.
     cal = CalendarDate("December ", 25);
     for (int i=0; i < 15; i++) {
          a = ++cal;
          cout << "the value of a = ++cal:\n";
          a.PrintCalendarDate(a.getDay());
          cout << "the value of cal\n";
          cal.PrintCalendarDate(cal.getDay());
          cout << endl;
     }
     cout << endl << "~~~~~~~" << endl <<endl;
     cout << "End of test 5: prefix increment.";
     cout << endl << "~~~~~~~" << endl <<endl;
     
     //  Test 6: a for loop that tests prefix decrementation.
     for (int i=0; i < 15; i++) {
          a = --cal;
          cout << "the value of a = --cal:\n";
          a.PrintCalendarDate(a.getDay());
          cout << "the value of cal\n";
          cal.PrintCalendarDate(cal.getDay());
          cout << endl;
     }
     cout << endl << "~~~~~~~" << endl <<endl;
     cout << "End of test 5: prefix decrement.";
     cout << endl << "~~~~~~~" << endl <<endl;
     return 0;
}
