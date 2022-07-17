#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    int count=0;
    string str;
    cin>>str;
    for (int i = 0; i < N; i++)
    {
        if(count>3)
        {
            break;
        }
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count=0;
        }
        else
        {
            count++;
        }
    }
    if(count>3)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    }
return 0;
}