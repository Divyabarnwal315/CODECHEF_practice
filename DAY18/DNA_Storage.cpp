#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    char S;
    char arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < N-1; i+=2)
    {
        if(arr[i]=='0' && arr[i+1]=='0')
        {
            S='A';
        }
        else if(arr[i]=='0' && arr[i+1]=='1')
        {
            S='T';
        }
        else if(arr[i]=='1' && arr[i+1]=='0')
        {
            S='C';
        }
        else if(arr[i]=='1' && arr[i+1]=='1')
        {
            S='G';
        }
         cout<<S;
    }
    cout<<endl;
}
return 0;
}