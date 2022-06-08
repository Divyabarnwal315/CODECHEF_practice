#include <bits/stdc++.h>
using namespace std;
int main(){
int N;
 while(cin >> N)
 {
int coins=((N/2)+(N/3)+(N/4));
cout<<max(N,coins)<<endl;
 }
return 0;
}