#include <iostream>
using namespace std;

float calculateFruitPrice(string fruit, string day, float quantity);

int main() 
{
    string fruit, day;
    float quantity;

    cout << "Enter the fruit: ";
    cin >> fruit;

    cout << "Enter the day of the week: ";
    cin >> day;

    cout << "Enter the quantity: ";
    cin >> quantity;

    float price = calculateFruitPrice(fruit, day, quantity);
     cout << "" << price << endl;
    if (price < -1) 
    {
        cout << "Error!" << endl;
    }

    return 0;
}

float calculateFruitPrice(string fruit, string day, float quantity)
{
    float price = -1;

    if (day != "Saturday" && day != "Sunday") 
    {
        if (fruit == "banana")
        {
            price = 2.50 * quantity;
        }
        else if (fruit == "apple") 
        {
            price = 1.20 * quantity;
        }
        else if (fruit == "orange") 
        {
            price = 0.85 * quantity;
        }
        else if (fruit == "grapefruit") 
        {
            price = 1.45 * quantity;
        }
        else if (fruit == "kiwi") 
        {
            price = 2.70 * quantity;
        } 
        else if (fruit == "pineapple") 
        {
            price = 5.50 * quantity;
        }
        else if (fruit == "grapes") 
        {
            price = 3.85 * quantity;
        }
    }
    else if (day == "Saturday" || day == "Sunday") 
    {
        if (fruit == "banana") 
        {
            price = 2.70 * quantity;
        }
        else if (fruit == "apple") 
        {
            price = 1.25 * quantity;
        }
        else if (fruit == "orange") 
        {
            price = 0.90 * quantity;
        }
        else if (fruit == "grapefruit") 
        {
            price = 1.60 * quantity;
        }
        else if (fruit == "kiwi") 
        {
            price = 3.00 * quantity;
        }
        else if (fruit == "pineapple") 
        {
            price = 5.60 * quantity;
        }
        else if (fruit == "grapes") 
        {
            price = 4.20 * quantity;
        }
    }

    return price;
}
