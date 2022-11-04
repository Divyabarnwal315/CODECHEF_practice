#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    float X,Y;
    int N,A,B;
    cin>>N>>X>>Y>>A>>B;
    float P=N/A;
    float D=N/B;
    float costP=P*X;
    float costD=D*Y;
    if((costP)<(costD))
    {
        cout<<"PETROL"<<endl;
    }
    else if ((costP) > (costD))
    {
        cout<<"DIESEL"<<endl;
    }
    else
    {
        cout<<"ANY"<<endl;
    }
}
return 0;
}
//REVISION(FALTU MISTAKE)