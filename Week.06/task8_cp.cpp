#include<iostream>
#include<cmath>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int Weekends);
main() {
    string yearType;
    int holidays, Weekends;

    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> Weekends;
}

int calculateVolleyballGames(string yearType, int holidays, int Weekends)
{
    int totalWeekends = 48;
    int weekendsInSofia = totalWeekends - Weekends;
    double weekendsPlayed = weekendsInSofia * 3.0 / 4.0;

    double holidayGames = holidays * 2.0 / 3.0;
    double totalGames = weekendsPlayed + holidayGames + Weekends;

    if (yearType == "leap") {
        totalGames += totalGames * 0.15;
    }
    cout << floor(totalGames) << endl;

}