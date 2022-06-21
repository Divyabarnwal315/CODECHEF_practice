#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    string S[N];
    for (int i = 0; i < N; i++)
    {
       cin>>S[i];
    }
    int countC=0,countS=0,countE=0,countM=0,countH=0;
    for (int i = 0; i < N; i++)
    {
        if(S[i]=="cakewalk")
        {
            countC=1;
        }
        else if(S[i]=="simple")
        {
            countS=1;
        }
        else if(S[i]=="easy")
        {
            countE=1;
        }
        else if(S[i]=="easy-medium" || S[i]=="medium")
        {
            countM=1;
        }
        else
        {
            countH=1;
        }
    }
    if((countC+countS+countE+countM+countH)==5)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
return 0;
}