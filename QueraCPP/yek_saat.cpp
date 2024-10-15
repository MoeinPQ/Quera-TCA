#include<iostream>
using namespace std;
int main()
{
    int hour,minute;
    cin >> hour >> minute;
    if((hour == 0) && (minute == 0))
    {
        cout << "00:00";
        return 0;
    }
    hour = 12-hour;
    minute = 60-minute;
    if( hour == 12)
    {
        hour=0;
    }

    if(minute == 60)
    {
        minute = 0;
    }

    if( hour<10  && minute<10)
    {
        cout << "0" << hour << ":" << "0" << minute;
    }else if(hour<10)
    {
        cout << "0" << hour << ":" << minute;
    }else if(minute<10)
    {
        cout << hour << ":" << "0" << minute;
    }else
    {
        cout << hour << ":" << minute;
    }

}

// hal shode.
