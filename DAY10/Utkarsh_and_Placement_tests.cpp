#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    char first , second , third , x , y;
    cin>>first>>second>>third>>x>>y;
    if(x==first)
    {
        cout<<x<<endl;
    }
    else if(y==first)
    {
        cout<<y<<endl;
    }
    else if(x==second)
    {
        cout<<x<<endl;
    }
    else
    {
        cout<<y<<endl;
    }
}
return 0;
}