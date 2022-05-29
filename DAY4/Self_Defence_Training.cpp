#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N;
        int count=0;
        for (int i = 0; i < N; i++)
        {
            cin>>X;
           if(X>=10 && X<=60)
           {
               count++;
           }
        }
        cout<<count<<endl;
    }
return 0;
}