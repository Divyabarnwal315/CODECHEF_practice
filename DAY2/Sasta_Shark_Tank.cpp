#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int A,B;
        cin>>A>>B;
        if(A*10==B*5)
        {
            cout<<"ANY"<<endl;
        }
        else if(A*10>B*5)
        {
            cout<<"FIRST"<<endl;
        }
        else
        {
            cout<<"SECOND"<<endl;
        }
    }
	return 0;
}
