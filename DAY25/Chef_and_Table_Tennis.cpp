#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    string S;
    cin>>S;
    int N=S.length();
    int count1=0;
    int count0=0;
    for (int i = 0; i < N; i++)
    {
        if(S[i]=='1')
        {
           count1++; 
        }
        else
        {
            count0++;
        }
    }
    if(count1>=count0)
    {
        cout<<"WIN"<<endl;
    }
    else if(count1<count0)
    {
        cout<<"LOSE"<<endl;
    }
}
return 0;
}