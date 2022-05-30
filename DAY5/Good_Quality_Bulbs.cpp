#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,X,sum=0;
    cin>>N>>X;
    for (int i = 0; i < N-1; i++)
    {
       int Y;
       cin>>Y;
       sum+=Y;
    }
    cout<<max(0,(N*X-(sum)))<<endl;
}
return 0;
}