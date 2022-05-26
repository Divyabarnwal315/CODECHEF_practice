#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,out;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((y-x)%8==0)
        {
            out=(y-x)/8;
        }
        else
        {
            out=(y-x)/8 +1;
        }
cout<<out<<endl;
    }
return 0;
}