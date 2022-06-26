#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N,M,K;
    cin>>N>>M>>K;
    //phle dekhenge koun bda h fir dono k bich ka antar fir jo chota h usme anTar+K krdenge fir N aur M ka diff out krdenge
    if(N>M)
    {
        int diff=N-M;
        M=M+ min(diff,K);
        cout<<N-M<<endl;
    }
    else if(N==M)
    {
        cout<<0<<endl;
    }
    else
    {
        int difference=M-N;
        N=N+(min(difference,K));
        cout<<M-N<<endl;
    }
}
return 0;
}