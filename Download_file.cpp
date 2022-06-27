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
    int flag=false;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        if(arr[N]%2==0)
        {
            cout<<"NO"<<endl;
            flag=true;
        }
    }
    if(flag==false)
    {
        cout << "YES" << endl;
    }
    
}
return 0;
}