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
    cin>>A[i];
   }
    int gcd=A[0];
    for (int i = 0; i < N; i++)
    {
        gcd=__gcd(A[i],gcd);
    }
    for (int i = 0; i < N; i++)
    {
        cout<<A[i]/gcd<<" ";
    }
    cout<<endl;
}
return 0;
}