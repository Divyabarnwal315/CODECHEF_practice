#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B;
    cin>>A>>B;
    if(A>B)
    {
    cout<<A<<" "<<A+B<<endl;
    }
    else
    {
        cout<<B<<" "<<A+B<<endl;
    }
}
return 0;
}