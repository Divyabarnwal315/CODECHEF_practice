#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    char N;
    cin>>N;
    if(N=='b' or N=='B')
    {
        cout<<"BattleShip"<<endl;
    }
    else if(N=='c' or N=='C')
    {
        cout<<"Cruiser"<<endl;
    }
    else if(N=='d' or N=='D')
    {
        cout<<"Destroyer"<<endl;
    }
    else
    {
        cout<<"	Frigate"<<endl;
    }
}
return 0;
}