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
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    //affected only when distance is 0,1,2 
    int count = 1, min = N, max = 0;
    for (int j = 1; j < N; j++)
    {
        if ((arr[j]-arr[j-1])<=2)
        {
            count++;
        }
        else
        {
            if (count>max)
            {
                max=count;
            }
            if (count<min)
            {
                min=count;
            }
            count=1;
        }
    }
    if (count>max)
    {
        max=count;
    }
    if (count<min)
    {
        min=count;
    }
    cout<<min<<" "<<max<<endl;
}
return 0;
}