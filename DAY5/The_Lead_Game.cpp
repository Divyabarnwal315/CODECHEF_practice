#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count1=0;
    int count2=0;
    int max=0,winner;
    while(t--)
{
    int player1,player2;
    cin>>player1>>player2;
    count1+=player1;
    count2+=player2;
    if(count1>count2)
    {
        if(max<(count1-count2))
        {
            max=(count1-count2);
            winner=1;
        }
    }
    else
    {
        if(max<(count2-count1))
        {
            max=(count2-count1);
            winner=2;
        }
    }
}
cout<<winner<<" "<<max<<endl;
return 0;
}