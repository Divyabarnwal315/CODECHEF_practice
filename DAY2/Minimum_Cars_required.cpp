#include <iostream>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int R=N/4;
        if (N%4==0)
        {
            cout<<R<<endl;
        }
        else
        {
            cout<<R+1<<endl;
        }
    }
	return 0;
}
