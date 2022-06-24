#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    string S;
    cin>>S;
    for (int i = 0; i < S.length(); i++)
    {
        if(S[i]=='p' && S[i+1]=='a' && S[i+2]=='r' && S[i+3]=='t' && S[i+4]=='y') 
        {
            S[i+2]='w';
            S[i+3]='r';
            S[i+4]='i';
        }
    }
    cout<<S<<endl;
}
return 0;
}