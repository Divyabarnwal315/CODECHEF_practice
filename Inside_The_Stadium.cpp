#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    //phle array bna lenge runs scored ka aur fir usko input m lenge fir hr run ka  
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        int runSum[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        int count=0;
        runSum[0]=arr[0];
        for(int i=0;i<N;i++)
        {
            runSum[i]=runSum[i-1]+arr[i];
        }
        float Balls = 1;
        float Runs;
        for(int i=0;i<N;i++)
        {
            Runs=(runSum[i]/Balls);
            Balls++;
            if((Runs*100)==100)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}