#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,ans1,ans2;
        cin>>x>>y;
ans1=500-2*x + 1000-4*(x+y);
ans2=500-2*(x+y) + 1000-4*y;
int ans=max(ans1,ans2);
cout<<ans<<endl;
    }
return 0;
}