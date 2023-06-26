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
        int result=0;
        while (N!=50)
        {
            if(N>50)
            {
                N=N-3;
                result++;
            }
            else 
            {
                N=N+2;
                result++;
            }
        }
        cout<<result<<endl;
        // if(N==50)
        // {
        //     cout<<"0"<<endl;
        // }
        // else if(N<50)
        // {
        //     if((N%2) !=0)
        //     {
        //         cout<<((50-N)/2)+1<<endl;
        //     }
        //     else
        //     {
        //         cout<<(50-N)/2<<endl;
        //     }
        // }
        // else
        // {
        //     if((N%2)!=0)
        //     {
        //         cout<<N-((N-50)*3)
        //     }
        // }
    }
return 0;
}