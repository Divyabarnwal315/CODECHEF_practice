#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C,D,E;
    cin>>A>>B>>C>>D>>E;
    if((A+B+C+D+E)==0)
    {
        cout<<"Beginner"<<endl;
    }
    else if((A+B+C+D+E)==1)
    {
        cout<<"Junior Developer"<<endl;
    }
    else if((A+B+C+D+E)==2)
    {
        cout<<"Middle Developer"<<endl;
    }
    else if((A+B+C+D+E)==3)
    {
        cout<<"Senior Developer"<<endl;
    }
    else if((A+B+C+D+E)==4)
    {
        cout<<"Hacker"<<endl;
    }
    else
    {
        cout<<"Jeff Dean"<<endl;
    }
}
return 0;
}