#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int X;
    cin>>X;
    if(X%5!=0)
    {
        cout<<"-1"<<endl;
    }
    else if(X%10==0)
    {
        cout<<X/10<<endl;
    }
    else
    {
        cout<<(X/10)+((X%10)/5)<<endl;
    }
}
	return 0;
}
