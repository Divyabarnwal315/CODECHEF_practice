#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
  string S;
  cin>>S;
  int count=0;
  int length=S.length();
  for (int i = 0; i < length; i++)
  {
    if(S[i]=='1' && S[i]!=S[i+1])
    {
        count++;
    }
  }
  cout<<count<<endl;
}
return 0;
}