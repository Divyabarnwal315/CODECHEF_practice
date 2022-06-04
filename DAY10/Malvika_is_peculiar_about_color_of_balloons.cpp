#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    string s;
    cin>>s;
    int countA=0;
    int countB=0;
    int size=s.length();
    for (int i= 0; i < size; i++)
{
         if(s[i]=='a')
    {
        countA++;
    }
    else
    {
        countB++;
    }
}
    if(countA>countB)
    {
        cout<<countB<<endl;
    }
    else
    {
        cout<<countA<<endl;
    }
}
return 0;
}