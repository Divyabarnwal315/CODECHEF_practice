#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        if(A>B && A>C)
        {
            if(A>B+C)
            {
            cout<<"YES"<<endl;
            }
        else
        {
             cout<<"NO"<<endl;
        }
        }
        else if(B>A && B>C)
        {
        if(B>A+C)
            {
            cout<<"YES"<<endl;
            }
        else
        {
             cout<<"NO"<<endl;
        }
        }
        else if(C>A && C>B )
        {
        if(C>B+A)
            {
            cout<<"YES"<<endl;
            }
        else
        {
             cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
	return 0;
}
