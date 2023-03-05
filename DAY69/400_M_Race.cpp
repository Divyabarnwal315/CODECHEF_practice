#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        // if(((400/X)>(400/Y)) && ((400/X)>(400/Z)))
        // {
        //     cout<<"ALICE"<<endl;
        // }
        // else if (((400 / Y) > (400 / Z)) && ((400 / Y) > (400 / X)))
        // {
        //     cout<<"BOB"<<endl;
        // }
        // else
        // {
        //     cout<<"CHARLIE"<<endl;
        // }
        if((min(A,(min(B,C))))==A)
        {
            cout<<"ALICE"<<endl;
        }
        else if ((min(A, (min(B, C)))) == B)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout << "CHARLIE" << endl;
        }
    }
return 0;
}