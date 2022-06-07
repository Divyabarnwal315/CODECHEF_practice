#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //probability of A=no.of faces in A/N ,P[B]=nofB/N,P{A}*P{B}
  int N,A,B;
  cin>>N>>A>>B;
   //int C[2]={0};
   int countA=0;
   int countB=0;
   int arr[N+1];
   for (int i = 1; i < N+1; i++)
   {
       cin>>arr[i];
       if(arr[i]==A)
       {
           countA++;
       }
       if(arr[i]==B)
       {
           countB++;
       }
   }
    double probability=((countA*countB*1.0)/(N*N*1.0));
    cout <<fixed<< setprecision(10) << probability<<endl;
}
return 0;
}