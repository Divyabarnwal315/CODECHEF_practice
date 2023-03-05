#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    string S;
    cin>>S;
    //agr 1 aur second position same nhi h to count+ krlega aur agr vo even h to half out ho jaega aur agr odd h to count+1/2 out krlenge
    int count=0;
    for (int i = 0; i < S.length()-1; i++)
    {
        if(S[i]!=S[i+1])
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<count/2;
    }
    else
    {
        cout<<(count+1)/2;
    }
    cout<<endl;
}
return 0;
}