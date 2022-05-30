#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int A,B;
    cin>>A>>B;
    float C=sqrt(A*A + B*B);
    float D=sqrt(B*B - A*A);
    cout<<D<<" "<<C<<endl;
    //printf("%0.4f \n",D,C);
}
return 0;
}