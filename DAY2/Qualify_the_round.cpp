#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int X,A,B;
    cin>>X>>A>>B;
    if(X<=A*1+B*2)
    {
        cout<<"Qualify"<<endl;
    }
    else
    {
       cout<<"NotQualify"<<endl; 
    }
}
	return 0;
}
