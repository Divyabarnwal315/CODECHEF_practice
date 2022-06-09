#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int b,r,m,e;
for (int i = 0; i < 4; i++)
{
    string S;
    int Z;
    cin>>S>>Z;
    if(S=="Barcelona")
    {
        b=Z;
    }
    if(S=="RealMadrid")
    {
        r=Z;
    }
    if(S=="Malaga")
    {
        m=Z;
    }
    if(S=="Eibar")
    {
        e=Z;
    }
}
if(r<m && e<b)
{
    cout<<"Barcelona"<<endl;
}
else
{
    cout<<"RealMadrid"<<endl;
}
}
return 0;
}