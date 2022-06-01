#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,A,B;
    cin>>X>>A>>B;
    cout<<(A+((100-X)*B))*10<<endl;
}
return 0;
}