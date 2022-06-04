#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,Y,Z;
    cin>>A>>B>>Y>>Z;
    if((A*A)*((Z*Z)*Z)==(B*B)*((Y*Y)*Y))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
return 0;
}