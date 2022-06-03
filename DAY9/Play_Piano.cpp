#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    string S;
    cin>>S;
    int N = S.length();
    int count=0;
    for (int i = 0; i < N; i+=2)
    {
        if(S[i]!=S[i+1])
        {
            count++;
        }
        else 
        {
            break;
        }
    }
      if(count==N/2)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
return 0;
}