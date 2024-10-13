#include<iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main() 
{
    int examHour, examMinute, studentHour, studentMinute;

    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;

    checkStudentStatus(examHour, examMinute, studentHour, studentMinute);
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute) 
{
    
    int examTimeInMinutes = examHour * 60 + examMinute;
    int arrivalTimeInMinutes = studentHour * 60 + studentMinute;
    
    int timeDifference = arrivalTimeInMinutes - examTimeInMinutes;

    if (timeDifference > 0) 
    {
        cout << "Late" << endl;
        if (timeDifference < 60) 
        {
            cout << timeDifference << " minutes after the start" << endl;
        } 
        else 
        {
            int hoursLate = timeDifference / 60;
            int minutesLate = timeDifference % 60;
            cout << hoursLate << ":";
            if (minutesLate < 10) cout << "0";
            cout << minutesLate << " hours after the start" << endl;
        }
    }

    else if (timeDifference >= -30) 
    {
        cout << "On time" << endl;
        if (timeDifference < 0) 
        {
            cout << -timeDifference << " minutes before the start" << endl;
        }
    }

    else 
    {
        cout << "Early" << endl;
        int earlyMinutes = -timeDifference;
        if (earlyMinutes < 60) 
        {
            cout << earlyMinutes << " minutes before the start" << endl;
        } 
        else 
        {
            int hoursEarly = earlyMinutes / 60;
            int minutesEarly = earlyMinutes % 60;
            cout << hoursEarly << ":";
            if (minutesEarly < 10) cout << "0";
            cout << minutesEarly << " hours before the start" << endl;
        }
    }
    return "";
}