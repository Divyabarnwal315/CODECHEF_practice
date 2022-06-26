#include <bits/stdc++.h>
using namespace std;
int main(){
    long long jacketCost, sockCost, money ;
    cin >> jacketCost>> sockCost>> money;
    int pair=(money-jacketCost)/sockCost;
    if(pair%2==0)
    {
        cout << "Lucky Chef"<<endl;
    }
    else
    {
        cout << "Unlucky Chef"<<endl;
    }
     return 0;
}