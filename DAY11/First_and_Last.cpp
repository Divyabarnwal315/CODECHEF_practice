#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
   int N;
   cin>>N;
   int A[N];
   for (int i = 0; i < N; i++)
   {
       cin >> A[i];
   }
   int sum=A[0]+A[N-1];
   for (int i = 0; i < N-1; i++)
    {
       sum=max(sum,A[i]+A[i+1]);
       
    }
    cout<<sum<<endl;
}
return 0;
}