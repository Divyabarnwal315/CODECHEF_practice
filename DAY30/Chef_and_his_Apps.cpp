#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;
        // remaining space=S-(X+Y) do cndn ya fir rs>=Z 0 aur rs<Z rs+X || rs+Y >=Z to 1 aur ek case 2 out
        int RS = S - (X + Y);
        if (RS >= Z)
        {
            cout << '0' << endl;
        }
        else
        {
            if ((RS + X >= Z) || (RS + Y >= Z))
            {
                cout << '1' << endl;
            }
            else
            {
                cout << '2' << endl;
            }
        }
    }
    return 0;
}