#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int N,K,M;
       cin>>N>>K>>M;
       if(M*K>=N)
       {
           cout<<"Yes"<<endl;
       }
       else
       {
           cout<<"No"<<endl;
       }
    }
	return 0;
}
