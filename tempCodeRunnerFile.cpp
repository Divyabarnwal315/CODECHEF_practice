#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C;
    cin>>A>>B>>C;
    int D=C/B;
    int M=min(A,D);
    int power=0;
    if(C%B==0)
    {
        power=((pow(B,2))*M);
        //cout<<pow(B,2)<<endl;
        //cout<<M<<endl;
        cout<<power<<endl;
    }
    else if(C%B!=0)
    {
        power=(pow(B,2)*M) + (pow(C%B,2));
        //cout << pow(B, 2) << endl;
        //cout << M << endl;
        cout<<power<<endl;
    }
}
return 0;
}