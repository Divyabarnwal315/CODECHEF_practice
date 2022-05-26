#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[4];
        int max=0;
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[i];
        if(arr[i]>max)
        max=arr[i];
        }
        cout<<max<<endl;
    }
return 0;
}