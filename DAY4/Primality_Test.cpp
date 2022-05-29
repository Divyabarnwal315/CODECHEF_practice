#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,flag=0;
    cin>>N;
    if(N==1)
    {
        cout<<"no"<<endl;
    }
    else
    {
    for (int i = 2; i < N; i++)
    {
        if(N%i==0)
        {
            cout<<"no"<<endl;
            flag=1;
            break;
        }
    }
    if(!flag)
    {
        cout<<"yes"<<endl;
    }
    }
}
return 0;
}