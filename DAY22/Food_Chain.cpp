#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    long long E,K;
    cin>>E>>K;
    int count=0;
    while(E>0)
    {
        count++;
        E=E/K;
    }
cout<<count<<endl;
}
return 0;
}