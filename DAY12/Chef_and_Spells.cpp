#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
   int A,B,C;
   cin>>A>>B>>C;
   cout<<((A+B+C)-min(A,min(B,C)))<<endl;
}
return 0;
}