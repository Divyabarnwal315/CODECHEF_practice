#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        
            if (A > B + C || B > A + C || C > B + A)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
    }
    return 0;
}
