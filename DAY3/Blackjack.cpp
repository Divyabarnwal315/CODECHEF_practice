#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin>>A>>B;
        int output;
        output=21-(A+B);
        if(1<=output && output<=10)
        {
            cout<<output<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
return 0;
}