#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    double ans=pow(0.143*N,N);
    if((ans-floor(ans))<0.5)
    {
        cout<<floor(ans)<<endl;
    }
    else
    {
        cout << (floor(ans))+1<< endl;
    }
}
return 0;
}
//REVISION