#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    string str;
    cin>>str;
    int count0=0;
    int count1=0;
    for (int i = 0; i < N; i++)
    {
        if(str[i]=='0')
        {
            count0++;
        }
        else 
        {
            count1++;
        }
    }
    float attendance=100*((float)(120-count0)/120);
    if(attendance>=75)
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