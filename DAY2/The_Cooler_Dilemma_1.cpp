#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int X,Y,M;
    cin>>X>>Y>>M;
    if(X*M<Y)
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
