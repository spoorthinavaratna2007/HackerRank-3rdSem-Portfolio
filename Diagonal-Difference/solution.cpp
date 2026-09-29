#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int primary = 0;
    int secondary = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int value;
            cin >> value;

            if(i == j)
            {
                primary += value;
            }

            if(i + j == n - 1)
            {
                secondary += value;
            }
        }
    }

    int difference = abs(primary - secondary);

    cout << difference << endl;

    return 0;
}