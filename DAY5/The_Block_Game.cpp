#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
   string str;
   cin>>str;
   string str2=str;

   reverse(str2.begin(),str2.end());
   if(str==str2)
   {
       cout<<"wins"<<endl;
   }
   else
   {
       cout<<"loses"<<endl;
   }
}
return 0;
}