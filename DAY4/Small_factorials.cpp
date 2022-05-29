#include <bits/stdc++.h>
//for storing large number in memory
#include <iostream>
using namespace std;
//precision k liye
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int fact=1;
	    for(int i=2; i<=n; i++)
	     fact=fact*i;
	    cout<<fact<<endl; 
	}
	return 0;
}




