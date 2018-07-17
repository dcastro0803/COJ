/*
input: day (11-14) hours (0-23) minute (0-59)
process rest compared with 11 day 11 hour 11 minute
output: time spend in contest; if earlier -1

*/


#include <iostream>

using namespace std;


/*
    Algorithm:

    minute >= 11 then total += minute - 11
        else total += 60 - 11 + minute; reduce 1 hour

    hour >= 11 then total += hour - 11
        else total += 24 - 11 + hour; reduce 1 day

    total += day - 11


*/

// calculate total minutes spend
int calculateTime( short int day, short int hour, short int minute){
    int total = 0;
    // reduce hour
    if(minute >= 11){
        total += minute -11;
    } else {
        total+= 60 - 11 + minute;
        hour--;
    }
    if(hour >= 11){
        total += (hour -11)*60;
    } else {
        total += (24 - 11 + hour)*60;
        day--;
    }
    total += (day - 11)*24*60;
    return total;

}

// determine if before starting date
int timeAfterContest(){
    short int day = 0, hour = 0, minute = 0;
    int total = 0;
    cin >> day >> hour >> minute;
    // the day is at minimum 11
    if(day <=11){
        if( hour < 11 || (hour == 11 && minute < 11) ){
                total = -1;
                return total;
        }
    }
    return calculateTime(day, hour, minute);
}


int main()
{
    cout << timeAfterContest()<< endl;
    return 0;
}
