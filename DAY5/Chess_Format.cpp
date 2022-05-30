#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B;
    cin>>A>>B;
    if(A+B<3)
    {
        cout<<"1"<<endl;
    }
    else if( 3 <=A + B && A+B<=10)
    {
        cout<<"2"<<endl;
    }
    else if(11 <=A + B && A+B<=60)
    {
        cout<<"3"<<endl;
    }
    else{
        cout<<"4"<<endl;
    }
}
return 0;
}