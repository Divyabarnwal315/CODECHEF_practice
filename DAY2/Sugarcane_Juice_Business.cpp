#include <iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--)
{
    int N;
    cin>>N;
    int X;
    X=50*N;
    cout<<X-(X/5+X/5+3*X/10)<<endl;
}
	return 0;
}
