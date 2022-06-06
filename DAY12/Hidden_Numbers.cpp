#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //A*B=N hai mtlb A=N/B,and B=N/A if A=X then B=N/X and AB=N
    int N;
    cin>>N;
    if(N/10>=1)
    cout<<2<<" "<<N/2<<endl;
    else if(N/10==0)
    {
        cout<<1<<" "<<N<<endl;
    }
}
return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //A*B=N hai mtlb A=N/B,and B=N/A if A=X then B=N/X and AB=N
    int N;
    cin>>N;
    cout<<1<<" "<<N<<endl;
}
return 0;
}
*/