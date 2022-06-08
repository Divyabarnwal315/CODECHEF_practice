#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B;
    cin>>A>>B;
    int C=abs(A-B);
    int D=A-B;
    if(A%3==0 || B%3==0)
    {
        cout<<"0"<<endl;
    }
    else if(C%3==0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"2"<<endl;
    }
}
return 0;
}