#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,P;
    cin>>N>>P;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    int easy=0;
    int hard=0;
    for (int i = 0; i < N; i++)
    {
       if(A[i]>=P/2)
       {
        easy++;
       }
       else if(A[i]<=(P/10))
       {
        hard++;
       }
    }
    if(easy==1 && hard==2)
    {
        cout<<"yes"<<endl;
    }
    else 
    {
        cout<<"no"<<endl;
    }
}
return 0;
}