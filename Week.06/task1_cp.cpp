#include <iostream>
using namespace std;
string decideActivity(string, string);
int main() 
{
    string temperature,humidity;
    cout<<"Enter temperature(warm or cold): ";
    cin>>temperature;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    cout<<"Recommended activity: "<<decideActivity(temperature,humidity);
    
    
   return 0;
}
string decideActivity(string temperature, string humidity)
{  
    string result;
    if(temperature=="warm" && humidity=="dry")
    {
        result="Play tennis";
        return result;
    }
    else  if(temperature=="warm" && humidity=="humid")
    {
        result="Swim";
        return result;
    }
      else  if(temperature=="cold" && humidity=="dry")
    {
        result="Play basketball";
        return result;
    }
         else  if(temperature=="cold" && humidity=="humid")
    {
        result="Watch TV";
        return result;
    }
     
    
    
}