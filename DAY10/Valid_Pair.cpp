#include <bits/stdc++.h>
using namespace std;
int main(){
int A,B,C;
cin>>A>>B>>C;
if(A==B || A==C)
{
    cout<<"YES"<<endl;
}
else if(B==C)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
return 0;
}