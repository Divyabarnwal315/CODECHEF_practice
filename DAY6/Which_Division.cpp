#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int R;
    cin>>R;
    if(R>=1000 && R<1600)
    {
        cout<<"3"<<endl;
    }
    else if(R>=2000 && R<=4500)
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