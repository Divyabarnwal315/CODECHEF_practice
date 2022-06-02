#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int PA , PB, QA , QB;
    cin>>PA>>PB>>QA>>QB;
    int P=max(PA , PB);
    int Q=max(QA , QB);
    if(P<Q)
    {
        cout<<"P"<<endl;
    }
    else if(P>Q)
    {
        cout<<"Q"<<endl;
    }
    else
    {
        cout<<"TIE"<<endl;
    }
}
return 0;
}