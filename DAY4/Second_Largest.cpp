#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(A>B && A<C)
        {
            cout<<A<<endl;
        }
        else if(B>A && B<C)
        {
            cout<<B<<endl;
        }
        else if(A<B && A>C)
        {
            cout<<A<<endl;
        }
        else if(B>C && B<A)
        {
            cout<<B<<endl;
        }
        else
        {
            cout<<C<<endl;
        }
    }
return 0;
}