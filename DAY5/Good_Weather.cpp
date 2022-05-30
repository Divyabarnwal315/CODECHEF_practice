#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int count0=0,count1=0;
    for (int i = 0; i < 7; i++)
    {
    int A;
    cin>>A;
    if(A==1)
    count1++;
    else
    count0++;
    }
    if(count1>count0)
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