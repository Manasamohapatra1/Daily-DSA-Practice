#include <bits/stdc++.h>
// Heat Wave
// During a scorching heat wave, the temperature in a Chefland reached a record high of
// 𝑋
// X degrees.

// The next day, the recorded temperature was
// 𝑌
// Y degrees. Find whether this was a new record high or not.

// Input Format
// The first and only line of input will contain two space separated integers
// 𝑋
// X and
// 𝑌
// Y denoting the highest recorded temperature and the temperature on a given day respectively.
using namespace std;

int main()
{
    int X, Y;
    cin >> X >> Y;
    if (Y > X)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}