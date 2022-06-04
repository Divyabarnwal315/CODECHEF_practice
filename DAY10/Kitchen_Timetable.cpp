#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    int A[N],B[N];
    //ai>=bi +1, count ,remaining time=a[i]-a[i-1] ,time >= count++ 
    int count = 0;
    for (int i = 0; i < N; i++)
    {
       cin>>A[i];
    }
    for (int i = 0; i < N; i++)
    {
       cin>>B[i];
    }

    //0 index vaala compare 
    if(A[0]>=B[0])
    {
        count++;
    }

    //1 se last tk ka compare 
for (int i = 1; i < N; i++)
{
    if((A[i]-A[i-1])>=B[i])
    {
        count++;
    }
}
cout<<count<<endl;
}
return 0;
}