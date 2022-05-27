#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y;
        cin>>X>>Y;
        if(100*X >= 10*Y)
        {
            cout<<"Cloth"<<endl;
        }
        else
        {
            cout<<"Disposable"<<endl;
        }
    }
	// your code goes here
	return 0;
}
