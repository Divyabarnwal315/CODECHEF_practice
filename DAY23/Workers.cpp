#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int arr[N];
    int arrb[N];
    int t = 10000, a = 10000, at = 10000;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin>>arrb[i];
    }
    for (int i = 0; i < N; i++)
    {
        if (arrb[i] == 1)
        {
           t=min(t,arr[i]);
        }
        else if(arrb[i]==2)
        {
            a=min(a,arr[i]);
        }
        else
        {
            at=min(at,arr[i]);
        }
    }
    cout<<(min((a+t),at))<<endl;
return 0;
}