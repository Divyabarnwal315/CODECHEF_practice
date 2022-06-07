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
   int sTime[N];
    int jTime[N];
    for (int i = 0; i < N; i++)
    {
       cin>>sTime[i]>>jTime[i];
       if(jTime[i]-sTime[i]>5)
       {
           count++;
       }
    }
    cout<<count<<endl;
}
return 0;
}