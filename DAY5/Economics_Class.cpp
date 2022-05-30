#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    int count=0;
    int S[N],D[N];
    for (int i = 0; i < N; i++)
    {
        cin>>S[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin>>D[i];
        if(S[i]==D[i])
        {
            count++;
        }
    }
 cout<<count<<endl;
}
return 0;
}