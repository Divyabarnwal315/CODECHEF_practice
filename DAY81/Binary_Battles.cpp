#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        //power calculate krke product krna a se aur usme add krna power-1 * b
        // function to evaluate logarithm base-10 double value10(double d)
        //METHOD-1 
        int N, A, B;
        cin>>N>>A>>B;
        int X ,Y;
        X= log2(N);
        Y=X-1;
        //cout<<X<<endl;
        cout << (X * A) + (Y * B) << endl;

        //METHOD-2
        //LOOP LGALO JB TK 2 SE DIVIDE KRNE P 1 N AAE COUNT KRLO FIR USKO MULTIPLY AUR ADD KRLO A B SE
        // int N,A,B;
        // int divide=0;
        // cin>>N>>A>>B;
        // while(N)
        // {
        //     divide++;
        //     N=N/2;
        // }
        // divide=divide-1;
        // cout<<(divide*A)+((divide-1)*B)<<endl;
    }
    return 0;
}