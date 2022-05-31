#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C,P,X,Y,Z;
    cin>>A>>B>>C>>P>>X>>Y>>Z;
    if(A<=X && B<=Y && C<=Z && P<=(X+Y+Z))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
return 0;
}