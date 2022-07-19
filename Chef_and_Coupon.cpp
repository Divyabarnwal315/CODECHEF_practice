#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int D,C;
    cin>>D>>C;
    int sum1=0;
    int sum2=0;
    int a[3],b[3];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        sum1=sum1+a[i];
        sum2=sum2+b[i];
    }
    int del=2*D;
    //90*2=180
    if(sum1>=150)
    {
        //90
        del=del-D;
    }
    if (sum2 >= 150)
    {
        //0
        del = del - D;
    }
    //Agr coupon aur jo v ab del charges h vo initial se km hoga to yes 
    if(C+del<(2*D))
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