#include <iostream>
using namespace std;

int main()
{
    int alice1, alice2, alice3;
    int bob1, bob2, bob3;

    cin >> alice1 >> alice2 >> alice3;
    cin >> bob1 >> bob2 >> bob3;

    int aliceScore = 0;
    int bobScore = 0;

    if(alice1 > bob1)
        aliceScore++;
    else if(bob1 > alice1)
        bobScore++;

    if(alice2 > bob2)
        aliceScore++;
    else if(bob2 > alice2)
        bobScore++;

    if(alice3 > bob3)
        aliceScore++;
    else if(bob3 > alice3)
        bobScore++;

    cout << aliceScore << " " << bobScore << endl;

    return 0;
}