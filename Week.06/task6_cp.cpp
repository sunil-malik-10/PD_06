#include<iostream>
using namespace std;
double calculatePrice(string month, int nights, bool isStudio);
main() {
    string month;
    int nights;
    cout << "Enter month: "; 
    cin >> month;
    cout << "Enter number of stays: "; 
    cin >> nights;

    cout << "Apartment: " << calculatePrice(month, nights, false) << "$." << endl;
    cout << "Studio: " << calculatePrice(month, nights, true) << "$." << endl;

}
double calculatePrice(string month, int nights, bool isStudio) {
    double pricePerNight;

    if (month == "May" || month == "October")
    {
        if (isStudio)
        {
            pricePerNight = 50;
            if (nights > 14) pricePerNight *= 0.70;
            else if (nights > 7) pricePerNight *= 0.95;
        } else {
            pricePerNight = 65;
        }
    } 
    else if (month == "June" || month == "September") {
        if (isStudio) {
            pricePerNight = 75.20;
            if (nights > 14) pricePerNight *= 0.80;
        } else {
            pricePerNight = 68.70;
        }
    } 
    else if (month == "July" || month == "August") {
        if (isStudio) {
            pricePerNight = 76;
        } else {
            pricePerNight = 77;
        }
    }

    if (!isStudio && nights > 14) {
        pricePerNight *= 0.90;
    }

    return pricePerNight * nights;
}
