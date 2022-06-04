#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B;
    cin>>A>>B;
    int sum=A+B;
    int count=0;
    while(sum!=0)
    {
        int digit=sum%10;
        sum=sum/10;
        if(digit==0 || digit==6 || digit==9)
        {
            count=count+6;
        }
        else if(digit==1)
        {
            count=count+2;
        }
        else if(digit==2 || digit==3 || digit==5)
        {
            count=count+5;
        }
        else if(digit==4)
        {
            count=count+4;
        }
        else if(digit==7)
        {
            count=count+3;
        }
        else
        {
            count=count+7;
        }
    }
    cout<<count<<endl;
}
return 0;
}