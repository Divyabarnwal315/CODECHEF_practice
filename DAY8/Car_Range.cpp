#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
{
    int P,M,V;
    cin>>P>>M>>V;
    cout<<(V*(M-(P-1)))<<endl;
}
return 0;
}