#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
   int N,X;
   cin>>N>>X;
   if(X%2!=0) 
   {
       cout<<"YES"<<endl;
   }
   else
   {
       if((N-X)%2==0)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }
   }
}
return 0;
}