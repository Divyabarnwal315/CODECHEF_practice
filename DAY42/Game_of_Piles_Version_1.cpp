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
    int min=INT_MAX;
    int arr[N];
    int odd=0;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        if (arr[i]<=min)
        {
            min=arr[i];
        }
        if((arr[i]%2)==1)
        {
            odd++;
        }
    }
    if (min == 1)
    {
        cout << "CHEF" << endl;
    }
    else if((odd%2)==0)
    {
        cout<<"CHEFINA"<<endl;
    }
    else 
    {
        cout<<"CHEF"<<endl;
    }
}
return 0;
}