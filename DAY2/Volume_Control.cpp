#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y;
        cin>>X>>Y;
        cout<<abs(X-Y)<<endl;
    }
	// your code goes here
	return 0;
}


/*
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int X,Y;
        cin>>X>>Y;
        if(X>Y)
        {
            cout<<X-Y<<endl;
        }
        else
        {
            cout<<Y-X<<endl;
        }
    }
	// your code goes here
	return 0;
}
*/


