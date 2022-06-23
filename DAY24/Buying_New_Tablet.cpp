#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,B;
    cin>>N>>B;
    int W,H,P;
    int max=-1;
    for (int i = 1; i <= N; i++)
    {
        cin>>W>>H>>P;
        int area=W*H;
        if(P<=B)
        {
            if(area>max)
            {
            max=area;
            }
        }
    }
   if(max==-1)
   {
    cout<<"no tablet"<<endl;
   } 
   else
   {
    cout<<max<<endl;
   }
}
return 0;
}