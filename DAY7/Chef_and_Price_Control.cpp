#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,K;
    cin>>N>>K;
    int pamnt=0;
    int camnt=0;
    for (int i = 0; i < N; i++)
    {
        int P;
        cin>>P;
        pamnt+=P;

        if(K<P)
        {
            P=K;
        }
        camnt+=P;
    }
    cout<<pamnt-camnt<<endl;   
}
return 0;
}