#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,Y;
    cin>>X>>Y;
    int climb=abs(((X-1)/10)-((Y-1)/10));
    cout<<climb<<endl;
}
return 0;
}
