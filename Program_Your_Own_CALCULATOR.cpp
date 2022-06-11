/#include <bits/stdc++.h>
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
    break;
}
else if(C=='-')
{
    ans=A-B;
    cout<<ans<<endl;
    break;
}
else if(C=='*')
{
    ans=A*B;
    cout<<ans<<endl;
    break;
}
else(C=='/')
{
    cout <<fixed<< setprecision(3) <<A/B<<endl;
    break;
}
return 0;
}