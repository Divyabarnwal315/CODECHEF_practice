#include <iostream>
using namespace std;

int main() {
int N;
cin>>N;
int l=0;
int u=0;
for(int i=0; i<N; i++)
{
    int W;
    cin>>W;
    if(W%2==0)
    {
        l++;
    }
    else
    {
        u++;
    }
}
    if(u<l)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }
	return 0;
}
