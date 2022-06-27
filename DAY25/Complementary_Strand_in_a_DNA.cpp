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
    for (int i = 0; i < N; i++)
    {
        if(S[i]=='A')
        {
            cout<<'T';
        }
        else if(S[i]=='T')
        {
            cout<<'A';
        }
        else if(S[i]=='G')
        {
            cout<<'C';
        }
        else if(S[i]=='C')
        {
            cout<<'G';
        }
    }
    cout<<endl;
}
return 0;
}