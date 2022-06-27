#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N,K;
        cin>>N>>K;
        int T,D;
        int amount=0;
        // T time D speed
        // N length h T aur D ki
        // K utta time jitte tym internet is free
        // K>T K=K-T
        // K=<T amount=(T-K)*D
        for (int i = 0; i < N; i++)
        {
            cin>>T>>D;
            if(K>T)
            {
                K=K-T;
            }
            else if(K<=T)
            {
                amount=amount+((T-K)*D);
                K=0;
            }
        }
        cout<<amount<<endl;
    }
    return 0;
}