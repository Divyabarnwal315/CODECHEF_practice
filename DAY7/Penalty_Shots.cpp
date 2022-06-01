#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int score=0;
    int team1=0;
    int team2=0;
    for (int i = 1; i <= 10; i++)
    {
        cin>>score;
        if(i%2==0)
        {
        team2+=score;
        }
        else
        {
        team1+=score;
        }
    }
    if(team1>team2)
    {
        cout<<"1"<<endl;
    }
    else if(team1<team2)
    {
        cout<<"2"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }   
}
return 0;
}