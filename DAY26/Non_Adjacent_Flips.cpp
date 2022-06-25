#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    string S;
    cin>>S;
    int count=0;
    for (int i = 0; i < N; i++)
    {
        if(S[i]=='1' && S[i+1]=='1')
        {
            count=2;
            break;
        }
        else
        {
            if(S[i]=='1')
            {
                count=1;
            }
        }
    }
    cout<<count<<endl;
}
return 0;
}