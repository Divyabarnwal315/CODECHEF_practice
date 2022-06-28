#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,X;
    cin>>N>>X;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int maxP=X;
    for (int i = 0; i < N; i++)
    {
        X=X+arr[i];
        if(X>maxP)
        {
            maxP=X;
        }
    }
cout<<maxP <<endl;   
}
return 0;
}
//REV 