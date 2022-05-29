#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,M;
            cin>>N>>M;
            if(N>M)
            {
                cout<<(N-M)*2+M<<endl;
            }
            else if(M>=N)
            {
                cout<<N<<endl;
            }
    }
return 0;
}