#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
   int Q,P;
   cin>>Q>>P;
   float Total;
   Total=Q*P;
   if(Q>=1000)
   {
    printf("%0.6f\n",Total*0.9);
   }
   else
   {
      printf("%0.6f\n",Total);
   }
}
return 0;
}