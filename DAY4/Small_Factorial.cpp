#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int factorial=1;
        for (int i = 2; i <= N; i++)
        {
            factorial=factorial*i;
        }
        cout<<factorial<<endl;
    }
return 0;
}