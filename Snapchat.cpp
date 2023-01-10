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
        for(int j=0;j<N;j++)
        {
            cin>>B[j];
        }
        //agr khi v day k row me 0 aa gya to next day se 1 se hi count hoga
        int count=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            if((A[i]!=0)&&(B[j]!=0))
            {
                cout<<N<<endl;
            }
            else if((A[i]!=0)||(B[j]!=0))
            {
                count++;
            }
            else
            {

            }
        }
    }
return 0;
}