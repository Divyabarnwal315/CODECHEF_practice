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
    int count=0;
    for (int i = 0; i < N; i++)
    {
        int sum=0;
        int product=1;
        for (int j = i; j < N; j++)
        {
            sum=sum+arr[j];
            product=product*arr[j];
            if(sum==product)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
return 0;
}