#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A1 , A2, A3;
    cin>>A1>>A2>>A3;
    int B1, B2, B3;
    cin>>B1>>B2>>B3;
    int sumA= A1+A2+A3;
    int sumB= B1+B2+B3;
    if(sumA==sumB)
    {
        cout<<"Pass"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
}
return 0;
}