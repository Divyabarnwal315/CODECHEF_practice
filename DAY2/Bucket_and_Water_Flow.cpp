#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int W, X, Y, Z;
        cin >> W >> X >> Y >> Z;
        int water = W + (Y * Z);
        if (water > X)
        {
            cout << "overFlow" << endl;
        }
        else if (water == X)
        {
            cout << "filled" << endl;
        }
        else
        {
            cout << "Unfilled" << endl;
        }
    }
    return 0;
}
