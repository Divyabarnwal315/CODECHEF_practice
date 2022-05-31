#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    if(N<=5)
    {
    cout<<"0"<<endl;
    }
    else
    {
        cout<<(N+1)/7<<endl;
    }
}
return 0;
}