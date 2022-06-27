#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,A,B;
    cin>>N>>A>>B;
    string S;
    cin>>S;
    int count=0;
    for (int  i = 0; i < N; i++)
    {    
    if(S[i]=='0')
    {
        count=count+A;
    }
    else if(S[i]=='1')
    {
        count+=B;
    }
    }
    cout<<count<<endl; 
}
return 0;
}