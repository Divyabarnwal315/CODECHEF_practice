#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    //nitin ka A coin and soubhagya ka B
    //int Y=(min(A,B))+C;
    //int Z=Y+D;
    if(A>=B)
    {
        B=B+C;
        if(A>=B)
        {
            B=B+D;
        }
        else
        {
            A=A+D;
        }
    }
    else if(A<B)
    {
        A=A+C;
        if(A>=B)
        {
            B=B+D;
        }
        else
        {
            A=A+D;
        }
    }
if(A>=B)
{
    cout<<"N"<<endl;
}
else 
{
    cout<<"S"<<endl;
}
}
return 0;
}