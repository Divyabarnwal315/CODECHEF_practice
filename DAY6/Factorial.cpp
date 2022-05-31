#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,Sum=0;
    cin>>N;
    while(N>=5)
    {
        N=N/5;
        Sum +=N;
    }
    cout<<Sum<<endl;
}
return 0;
}