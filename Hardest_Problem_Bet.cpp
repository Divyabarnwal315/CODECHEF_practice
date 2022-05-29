#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C;
    cin>>A>>B>>C;
    if(A>B && B<C)
    {
        cout<<"Bob"<<endl;
    }
    else if(A>C && B>C)
    {
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
}
return 0;
}