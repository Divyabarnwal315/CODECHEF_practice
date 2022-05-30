#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    int count=0;
    int R=N%100;
    count=  N/100;
    count+=R/50;
    R=R%50;
    count+=R/10;
    R=R%10;
    count+=R/5;
    R=R%5;
    count+=R/2;
    R=R%2;
    count+=R/1;
    R=R%1;
    cout<<count<<endl;
}
return 0;
}