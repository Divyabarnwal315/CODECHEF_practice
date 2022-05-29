#include <iostream>
using namespace std;

int main() {
int R,O,C;
cin>>R>>O>>C;
int remaining=(20-O)*6;
int maxscore= remaining*6;
if((maxscore+C)>R)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
	return 0;
}
