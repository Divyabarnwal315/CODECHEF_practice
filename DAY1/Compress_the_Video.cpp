#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin >> t;
    while (t--)
    {
        int N;
         cin>>N;
         int a[N];
         for(int i=0; i<N; i++)
         {
            cin>>a[i];
         }
         int count=0;
         for(int i=0; i<N-1; i++)
         {
             if(a[i]!=a[i+1])
         count++;
         }
         cout<<count+1<<endl;
    }
return 0;
}