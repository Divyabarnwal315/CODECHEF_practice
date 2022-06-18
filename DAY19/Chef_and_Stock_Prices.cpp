#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int S,A,B;
    float C;
    cin>>S>>A>>B>>C;
    float price=(S+((S*C)/100));
    if(price>=A && price<=B)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
return 0;
}