#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X;
    cin>>X;
    string S;
    cin>>S;
    int Ccount=0;
    int Ncount=0;
    int Dcount=0;
    for (int i = 0; i < 14; i++)
    {
        if(S[i]=='C')
        Ccount+=2;
        else if(S[i]=='N')
        Ncount+=2;
        else
        {
            Ccount++;
            Ncount++;
        }
    }
if(Ccount>Ncount)
{
    cout<<60*X<<endl;
}
   else if(Ccount==Ncount)
   {
       cout<<55*X<<endl;
   } 
   else
   {
       cout<<40*X<<endl;
   }

}
return 0;
}