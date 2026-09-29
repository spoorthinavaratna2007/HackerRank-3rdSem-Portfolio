#include <iostream>
#include <string>
using namespace std;

int main()
{
    string time;
    cin >> time;

    int hour = stoi(time.substr(0, 2));
    string period = time.substr(8, 2);

    if(period == "PM" && hour != 12)
    {
        hour = hour + 12;
    }

    if(period == "AM" && hour == 12)
    {
        hour = 0;
    }

    if(hour < 10)
    {
        cout << "0";
    }

    cout << hour << time.substr(2, 6) << endl;

    return 0;
}