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
    //phle 9 se chote vaale dekhlene uske liye 8 array ki value jitti index le lenge fir dekh lenge ki p ki value max koun si aa rhi aur unko add krdenge aur jb p[i] ki value 9,10,11 aaei to ignore krdenge
    int score=0;
    int P,S;
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        arr[i]=0;
    }
    for (int i = 0; i < N; i++)
    {
        cin >>P>>S;
        arr[P -1]= max(arr[P- 1], S);
    }
    for (int i = 0; i < 8; i++)
    {
        score=score+arr[i];
    }
    cout<<score<<endl;
}
return 0;
}