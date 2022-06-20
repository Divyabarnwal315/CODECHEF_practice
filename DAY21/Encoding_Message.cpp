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
    int A;

    //even
    if(N%2==0)
    {
        A=N;
    }
    else
    {
        A=N-1;
    }
    for (int i = 0; i < A; i+=2)
    {
        swap(S[i],S[i+1]);
    }
    for (int i = 0; i < N; i++)
    {
        S[i]='a'-S[i]+'z';
    }
    cout<<S<<endl;
}
return 0;
}
///REVISION