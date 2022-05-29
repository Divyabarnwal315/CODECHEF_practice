#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y,A,B;
        cin>>X>>Y>>A>>B;
        int output=((X==A || X==B)+(Y==A or Y==B));
        cout<<abs(2-(output))<<endl;       
    }
return 0;
}