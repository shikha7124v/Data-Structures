#include<bits/stdc++.h>
using namespace std;

string dayOfTheWeek(int day, int month, int year) 
{
    static int t[] = {0, 3, 2, 5, 0, 3,
                      5, 1, 4, 6, 2, 4};
    year -= month < 3;
    int daycode = (year + year/4 - year/100 + 
               year / 400 + t[month - 1] + day) % 7;
               
    string weekday;
    switch(daycode){
        case 1: weekday = "Monday";
        break;
        case 2: weekday = "Tuesday";
        break;
        case 3: weekday = "Wednesday";
        break;
        case 4: weekday = "Thursday";
        break;
        case 5: weekday ="Friday";
        break;
        case 6: weekday = "Saturday";
        break;
        case 0: weekday = "Sunday";
        break;
        case 7: weekday = "Sunday";
        break;
    } 
    return weekday;
}
