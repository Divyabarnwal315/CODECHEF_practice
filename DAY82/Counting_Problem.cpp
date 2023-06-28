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
        int count=0;
        //phle y dekh lenge ki koi position agr 2 se multiple nhi h to usko count kra lenge fir agr total 2 se divisible nhi hua to divide nhi ho paega aur ya fir count hi 0 ho gya to indono case me hmesa no hi aaega otherwise yes 
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<N;i++)
        {
            if(arr[i]%2 != 0)
            {
                count++;
            }
        }
        if(count%2!=0 || count==0)
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