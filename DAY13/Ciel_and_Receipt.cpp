#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //ulta loop phle qki min find krna h,fir 2 ki max power dekh lenge ki usse bda h ya n,fir - kr lenge aur loop me vo check krta rhega fir count se total bta dega
    int p;
    cin>>p;
    int count=0;
    for (int i = 11; i>=0; i--)
    {
        int Cpower=pow(2,i);
        while(p>=Cpower)
        {
            p=p-Cpower;
            count++;
        }
    }
    cout<<count<<endl;
}
return 0;
}