#include <iostream>
using namespace std;
float cellularCompany(char type, char time, int minutes);P
int main() 
{
    char type, time;
    int minutes;

    cout << "Enter The service code (R/r for regular, P/p for premium): ";
    cin >> type;

    if (type == 'P' || type == 'p') 
    {
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
        cout << "Enter the number of minutes : ";
        cin >> minutes;
        cout << "Service Type: Premium" << endl;
    }
    
    if (type == 'R' || type == 'r') 
    {
        cout << "Enter the number of minutes : ";
        cin >> minutes;
        cout << "Service Type: Regular" << endl;
    }

    cout << "Total Minutes Used: " << minutes << " minutes" << endl;
    cout << "Amount Due: $" << cellularCompany(type, time, minutes) << endl;
    
    return 0;
}

float cellularCompany(char type, char time, int minutes)
{  
    float amount = 0.0;

    if (type == 'R' || type == 'r')
    {
        amount = 10.00;  
        if (minutes > 50) 
        {
            amount += (minutes - 50) * 0.20;  
        }
        return amount;
    }
    
    else if (type == 'P' || type == 'p')
    {
        amount = 25.00;  

        if (time == 'D' || time == 'd')  
        {
            if (minutes > 75)
            {
                amount += (minutes - 75) * 0.10;  
            }
        }
        else if (time == 'N' || time == 'n')  
        {
            if (minutes > 100)
            {
                amount += (minutes - 100) * 0.05;  
            }
        }
        return amount;
    }

    else 
    {
        cout << "Error: Invalid service type!" << endl;
        return 0;
    }
}
