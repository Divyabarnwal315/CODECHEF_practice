#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C;
    int problems[3];
    cin>>problems[0]>>problems[1]>>problems[2];
    sort(problems,problems+3);
    if(problems[0]+problems[1]==problems[2])
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
return 0;
}