#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int w1,w2,x1,x2,M;
    cin>>w1>>w2>>x1>>x2>>M;
        //min=1+2=3 and max=1+4=6
//REVISION
    int min = w1 +(x1*M);
    int max = w1 +(x2*M);
    if(w2>=min && w2<=max)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
return 0;
}