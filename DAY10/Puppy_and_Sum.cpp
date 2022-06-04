#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //D-1 cndn D>1 sumofN 6=temp  ,D sumoftemp
    int D,N;
    cin>>D>>N;
    int sum=0;
    for (int i = 0; i < D; i++)
    {
     sum=(N*(N+1))/2;
     N=sum;
    }
    cout<<sum<<endl;
}
return 0;
}