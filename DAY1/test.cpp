#include <bits/stdc++.h>
using namespace std;
int insert(int arr[],int n , int pos)
{
    int i;
for(i=n; i>=pos; i--)
arr[i]=arr[i-1];
arr[pos-1]=x;
return arr;
}
