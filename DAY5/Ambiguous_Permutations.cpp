#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N!=0)
{
    N++;
    int A[N],i;
    for (i = 1; i < N; i++)
    {
        cin>>A[i];
    }
    for ( i = 1; i < N; i++)
    {
        if(A[A[i]]!=i)
        break;
    }
    if(i==N)
    {
        cout<<"ambiguous"<<endl;
    }
    else
    {
        cout<<"not ambiguous"<<endl;
    }
    
    cin>>N;
}
return 0;
}