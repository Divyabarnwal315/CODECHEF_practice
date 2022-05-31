#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
   int A,B,X,Y,Z;
   cin>>A>>B>>X>>Y>>Z;
   if((min(A/X , B/Y))>=Z )
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}
return 0;
}