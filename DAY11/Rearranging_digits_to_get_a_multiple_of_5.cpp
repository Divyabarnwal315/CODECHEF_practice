#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int length;
    cin>>length;
    string str;
    cin>>str;
    int count=0;
    for (int i = 0; i < length; i++)
    {
        if(str[i]=='0' || str[i]=='5')
        {
           count++;
        }
    }
    if(count>0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
return 0;
}