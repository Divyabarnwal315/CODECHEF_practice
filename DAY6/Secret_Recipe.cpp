#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    float A,B,C,Y,Z;
    cin>>A>>B>>C>>Y>>Z;
    float P=abs((C-A))/Y;
    float Q=(abs(C-B))/Z;
    if(P<Q)
    {
        cout<<"Chef"<<endl;
    }
    else if(Q<P)
    {
        cout<<"Kefa"<<endl;
    }
    else
    {
        cout<<"Draw"<<endl;
    }
}
return 0;
}