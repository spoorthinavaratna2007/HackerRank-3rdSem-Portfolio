#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> strings(n);

    map<string, int> count;

    for(int i = 0; i < n; i++)
    {
        cin >> strings[i];
        count[strings[i]]++;
    }

    int q;
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        string query;
        cin >> query;

        cout << count[query] << endl;
    }

    return 0;
}