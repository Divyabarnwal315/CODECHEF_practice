#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    string S;
    cin>>S;
    // METHOD-2 SORT
    sort(S.begin(),S.end());
    cout<<S<<endl;
    // int count0=0;
    // int count1=0;
    // for (int i = 0; i < N; i++)
    // {
    //     if(S[i]=='1')
    //     {
    //         count1++;
    //     }
    //     else
    //     {
    //         count0++;
    //     }
    // }
    // for (int i = 0; i < count0; i++)
    // {
    //     cout<<'0';
    // }
    // for (int i = 0; i < count1; i++)
    // {
    //     cout<<'1';
    // }
    // cout<<endl;

}
return 0;
}
