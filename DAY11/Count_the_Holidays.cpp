#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int N;
    cin>>N;
    //if index!=6,7,13,14,20,21,27,28,count++,count+1,9
    int A[N];
    int count=0;
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
        if(A[i]!=6 && A[i]!=7 && A[i]!=13 && A[i]!=14 && A[i]!=20 && A[i]!=21 && A[i]!=27 && A[i]!=28)
        //if A[i]%7!=0 || (A[i]+1)%7!=0 
        {
            count++;
        }
    }
   cout<<count+8<<endl; 
}
return 0;
}