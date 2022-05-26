#include <bits/stdc++.h>
using namespace std;
int main(){
     int t;
    cin >> t;
    while (t--)
    {
        int X,Y;
        cin>>X>>Y;
        cout<<min(3*X , 2*Y)<<endl;
    }
return 0;
}