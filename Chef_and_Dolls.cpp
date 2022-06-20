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
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int XOR=0;
    for (int i = 0; i < N; i++)
    {
        XOR=XOR^arr[i];
    }
    cout<<XOR<<endl;
}
return 0;
}
//REVISION