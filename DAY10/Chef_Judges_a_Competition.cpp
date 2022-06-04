#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //test case for integers
    int  N;
    cin>>N;
    int A[N];
    int B[N];

    for (int i = 0; i < N; i++)
    {
       cin>>A[i];
       
    }
    for (int i = 0; i < N; i++)
    {
      cin>>B[i];
    }
    //sort A and B
    sort(A,A+N);
    sort(B,B+N);

    //initialize both sum=0
    int SumA=0;
    int SumB=0;

    //n-1 tk add qki last vaala remove ho jaega 
    for (int i = 0; i < N-1; i++)
    {
       SumA = SumA + A[i];
       SumB = SumB + B[i];
    }

    //compare sum of both
    if (SumA < SumB)
    {
        cout<<"Alice"<<endl;
    }
    else if(SumA > SumB)
    {
        cout<<"Bob"<<endl;
    }
    else
    {
        cout<<"Draw"<<endl;
    }
}
return 0;
}