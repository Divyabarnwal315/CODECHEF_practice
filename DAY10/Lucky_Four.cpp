#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    string N;
    cin>>N;
    int count=0;
    int size=N.length();
    for (int i = 0; i < size; i++)
    {
        if(N[i]=='4')
        {
            count++;
        }
    }
    
    /*
    int N;
    cin>>N;
    int count=0;
   while (0<N)
    {
        if(N%10==4)
        {
        count++;
        }
        N=N/10;
    }
    */
    cout<<count<<endl;
}
return 0;
}
//i=0 N=44747
//i=1 N=4474
//i=2 N=447
//i=3 N=44
//i=4 N=4
