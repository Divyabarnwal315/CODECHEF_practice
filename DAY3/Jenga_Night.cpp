#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int N,X;
    cin>>N>>X;
    if(X%N==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
	return 0;
}
