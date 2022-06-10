#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B;
    cin>>A>>B;
    if(A==B)
    {
        cout<<"YES"<<endl;
    }
    else if((((B-A)%3)==0) || (((B-A)%3)==1))
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