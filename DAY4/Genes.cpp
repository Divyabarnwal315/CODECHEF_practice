#include <bits/stdc++.h>
using namespace std;
int main(){
char x,y;
cin>>x>>y;
if(x=='R' || y=='R')
{
    cout<<"R"<<endl;
}
else if(x=='B' || y=='B')
{
    cout<<"B"<<endl;
}
else 
{
    cout<<"G"<<endl;
}
return 0;
}