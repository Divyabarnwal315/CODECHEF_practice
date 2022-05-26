#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int N,X,K;
        cin>>N>>X>>K;
        if(K>=N*X)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
