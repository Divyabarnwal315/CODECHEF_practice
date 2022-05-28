#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int X,output;
    cin>>X;
    output=X%3;
    if(output==0)
    {
        cout<<"NORMAL"<<endl;
    }
else if(output==1)
{
    cout<<"HUGE"<<endl;
}
else
{
    cout<<"SMALL"<<endl;
}
}
	return 0;
}
