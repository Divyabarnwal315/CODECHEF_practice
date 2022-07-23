#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int S,W1,W2,W3;
    cin>>S>>W1>>W2>>W3;
    if((W1+W2+W3)<=S)
    {
        cout<<"1"<<endl;
    }
    else if(W1+W2<=S || W2+W3<=S)
    {
        cout<<"2"<<endl;
    }
    else{
        cout<<"3"<<endl;
    }
}
return 0;
}