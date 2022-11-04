#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;
    int result = pow(x, n);
    int power = 0;
    {
        if (n == 0)
        {
            return 1;
        }
        else if (n % 2 == 0)
        {
            power = (x, n / 2);
            cout << pow(x, n / 2) * pow(x, n / 2) << endl;
        }
        else
        {
            cout << x * pow(x, n - 1) << endl;
        }
    }
    return 0;
}
