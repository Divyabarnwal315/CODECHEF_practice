#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        int arrA[N],arrB[N];
        for(int i=0;i<N;i++)
        {
            cin>>arrA[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> arrB[i];
        }
        //arrA me dekhna koun koun se index p vaue X se jyada vo index arrB ka add krna  h
        int add=0;
        for(int i=0;i<N;i++)
        {
            if(arrA[i]>=X)
            {
                add=add+arrB[i];
            }
        }
        cout << add << endl;
    }
return 0;
}