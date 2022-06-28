#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //phle dekh lenge dusra element+1 krake aur fir y cndn daal denge ki dono array ki index i k = hogi to count++ kradenge
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for (int i = 0; i < N; i++)
    {
        for (int j =i+1 ; j < N; j++)      
        {
            if((arr[i]&arr[j])==arr[i])
            {
                count++;
            }
        }
        
    }
    cout<<count<<endl;
}
return 0;
}