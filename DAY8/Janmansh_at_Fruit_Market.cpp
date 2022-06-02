#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,A,B,C;
    //array me 3 fruits ka price krdiya
    int fruits[3];
    cin>>X>>fruits[0]>>fruits[1]>>fruits[2];
    //sort use krke 0 index se 0+3 mtlb 2 index tk ko sort krdiya assending
    sort(fruits,fruits+3);
    cout<<(((X-1)*fruits[0])+(fruits[1]))<<endl;
}
return 0;
}