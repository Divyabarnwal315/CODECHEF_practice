#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X;
    cin>>X;
    if(X>=1 && X<100)
    {
        cout<<"Easy"<<endl;
    }
    else if(X>=100 && X<200)
    {
        cout<<"Medium"<<endl;
    }
    else
    {
        cout<<"Hard"<<endl;
    }
}
return 0;
}