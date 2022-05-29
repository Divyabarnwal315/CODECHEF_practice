#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
        int count=0;
        for (int i = 0; i < N; i++)
        {
            int X;
            cin>>X;
            if((X+K)%7 == 0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
return 0;
}