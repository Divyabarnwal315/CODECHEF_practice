#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int N,count=0;
    int ATTACK=0;
    int DEFENSE=0;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
        //string ko ek attack aur ek defense 0 krke declare krdo fir agr koi position 500 se bdi h use attack + krdo aur agr 500 se chota aae to defense ko add krke 10000 se us position ko sub krdo fir check krenge ki
        for (int i = 0; i < N; i++)
        {
            if (arr[i] > 500)
            {
                ATTACK = ATTACK + arr[i];
            }
            else if (arr[i] < 500)
            {
                DEFENSE = DEFENSE + (10000 - arr[i]);
            }
            else
            {
                count++;
            }
        }
            for (int i = 0; i < count; i++)
            {
                if (ATTACK > DEFENSE)
                {
                    DEFENSE += 500;
                }
                else
                {
                    ATTACK += 500;
                }
            }
cout<<(ATTACK*DEFENSE)<<endl;
}
return 0;
}