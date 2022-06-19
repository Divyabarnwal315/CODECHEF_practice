#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    float N,V1,V2;
    cin>>N>>V1>>V2;
    float distanceS= N*sqrt(2);
    float distanceE= 2*N;
    float timeS= distanceS/V1;
    float timeE= distanceE/V2;
    if(timeE>timeS)
    {
        cout<<"Stairs"<<endl;
    }
    else
    {
        cout<<"Elevator"<<endl;
    }
}
return 0;
}