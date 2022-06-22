#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    int arr[N];
    int arrb[N];
    int index=0;
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
        if(arr[i]*arrb[i]>arr[index]*arrb[index])
        {
            index=i;
        }
        else if (arr[i] * arrb[i] == arr[index] * arrb[index])
        {
            if(arrb[i]>arrb[index])
            {
                index=i;
            }
        }
    }
    cout<<index+1<<endl;
}
return 0;
}