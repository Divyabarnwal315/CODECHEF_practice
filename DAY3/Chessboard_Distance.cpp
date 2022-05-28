#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        cout<<max(abs(A-C),abs(B-D))<<endl;
    }
return 0;
}