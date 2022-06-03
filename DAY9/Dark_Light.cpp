#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,K;
    cin>>N>>K;
    if(N%4==0 && K==1)
    {
        cout<<"On"<<endl;
    }
    else if(N%4!=0 && K==1)
    {
        cout<<"Ambiguous"<<endl;
    }
    else if(N%4==0 && K==0)
    {
        cout<<"Off"<<endl;
    }
    else
    {
        cout<<"On"<<endl;
    }
}
return 0;
}