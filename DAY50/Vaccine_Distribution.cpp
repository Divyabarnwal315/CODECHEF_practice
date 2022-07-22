#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N,D;
    cin>>N>>D;
    int arr[N];
    int risk=0;
    int Nrisk=0;
    // phle <=9 aur 80<= vaale ko D se divide kr denge agr R!=0 aaya to Q+1 aur same remaining vaalo k liye v krenge
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        if(arr[i]>=80 || arr[i]<=9)
        {
            risk++;
        }
        else
        {
            Nrisk++;
        }
    }
    int riskD = risk/D;
    if((risk%D)!=0)
    {
        riskD++;
    }
    int riskND = Nrisk/D;
    if((Nrisk%D)!=0)
    {
        riskND++;
    }
    cout<<riskD+riskND<<endl;
}
return 0;
}