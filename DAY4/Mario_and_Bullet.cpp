#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,Z;
        cin>>X>>Y>>Z;
        if(Z>=Y/X)
        {
        cout<<Z-Y/X<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
return 0;
}