#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int X;
        cin>>X;
        if (X>=1000)
        {
        cout<<X/10<<endl;
        }
        else
        {
            cout<<"100"<<endl;
        }
    }
	return 0;
}
