#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int N,count=0;
    cin>>N;
    for(int i=0;i<N; i++)
    {
        int X;
        cin>>X;
        if(X>=1000)
        count++;
    }
    cout<<count<<endl;
}
	return 0;
}
