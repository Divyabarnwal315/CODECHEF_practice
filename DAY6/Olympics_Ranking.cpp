#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C,X,Y,Z;
    cin>>A>>B>>C>>X>>Y>>Z;
    if(A+B+C>X+Y+Z)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"2"<<endl;
    }
}
return 0;
}