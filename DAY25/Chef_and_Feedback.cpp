#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    string S;
    cin>>S;
    int flag=0;
    for (int i = 0; i < S.length(); i++)
    {
        if((S[i]=='0' && S[i+1]=='1' && S[i+2]=='0')||(S[i]=='1' && S[i+1]=='0' && S[i+2]=='1'))
        {
            cout<<"Good"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "Bad" << endl;
    }
}
return 0;
}