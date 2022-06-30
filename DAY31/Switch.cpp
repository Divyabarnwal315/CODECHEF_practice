#include <bits/stdc++.h>
using namespace std;
int main()
{
    int day;
    cout << "Enter day";
    cin >> day;
    char Case;
    switch (day)
    {
        case 'a' : cout << "Birthday\n";
        break;

        case 'b' : cout << "Valentinesday\n";
        break;
    default:
        cout << "Holiday";
    }
    return 0;
}