//program to check armstrong num
#include <iostream>
using namespace std;
int main()
{
    int n,r,sum=0;
    cout<<"Enter n ";
    cin>>n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }
    if(sum=n)
    {
        cout<<"Its armstrong"<<endl;
    }
    else
    {
        cout<<"its not armstrong"<<endl;
    }
    return 0;
}
