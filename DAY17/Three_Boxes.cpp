#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if(A+B+C<=D)
    {
        cout<<1<<endl;
    }
    else if(A+B<=D || B+C<=D || A+C<=D)
    {
        cout<<2<<endl;
    }
    else if(A+B>D || B+C>D || A+C>D)
    {
        cout<<3<<endl;
    }
}
return 0;
}