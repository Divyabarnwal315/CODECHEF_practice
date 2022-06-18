#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    /*A=x+B;
B=y+C;
C=z+A;
Let A+B+C=D;
D=D+x+y+z;
x+y=z;
z max x,y,z;
*/

    int X,Y,Z;
    cin>>X>>Y>>Z;
    if(((X+Y)==Z) || ((Y+Z)==X)|| ((Z+X)==Y))
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
return 0;
}