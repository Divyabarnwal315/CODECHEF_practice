#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--)
   {
       int N,X,P;
       cin>>N>>X>>P;
       int right=3*X;
       int wrong=(N-X)*-1;
       int total=right+wrong;
       if(total<P)
       {
           cout<<"FAIL"<<endl;
       }
       else
       {
           cout<<"PASS"<<endl;
       }
   }
return 0;
}