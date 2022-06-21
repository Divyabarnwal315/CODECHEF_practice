#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>arr[i];
    }
    int XOR=0;
    for (int i = 0; i < 4; i++)
    {
        XOR=XOR^arr[i];
    }
    if(XOR==0)
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