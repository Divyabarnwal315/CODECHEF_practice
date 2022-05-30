#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int Z,Y,A,B,C;
    cin>>Z>>Y>>A>>B>>C;
    if((Z-Y)<(A+B+C))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
return 0;
}