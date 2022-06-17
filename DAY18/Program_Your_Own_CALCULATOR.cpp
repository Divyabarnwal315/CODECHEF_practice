#include <bits/stdc++.h>
using namespace std;
int main()
{
double A,B;
cin>>A>>B;
char C;
cin>>C;
double ans=0;
if(C=='+')
{
    ans=A+B;
    cout<<ans<<endl;  
}
else if(C=='-')
{
    ans=A-B;
    cout<<ans<<endl;  
}
else if(C=='*')
{
    ans=A*B;
    cout<<ans<<endl;
}
else if(C=='/')
{
    cout <<fixed<< setprecision(1) <<A/B<<endl;
}
return 0;
}