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
        int A[N];
        int B[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<N;i++)
        {
            cin>>B[i];
        }
        //agr khi v day k row me 0 aa gya to next day se 1 se hi count hoga
        int count=0,ans=0;
        for(int i=0;i<N;i++)
        {
            
            if((A[i]!=0)&&(B[i]!=0))
            {  
                count++;
                ans= max (count,ans);
            }
            else
            {
                count=0;
            }
        }
            cout<<ans<<endl;
    }
return 0;
}