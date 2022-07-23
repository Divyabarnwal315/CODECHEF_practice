#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
{
    int A,B,N;
    cin>>A>>B>>N;
    //phle dekh liye jo power me lena h vo even h ya nhi agr even h to dono num ka mod lekr dekh lene ki koun sa bda h aur vo out kra denge qki fir -ve value v +ve ho jaegi aur agr power lene vaali value odd h to -ve value -ve hi reh jaegi isliye simple comparison krlenge A aur B ke relation ka aur use out kra dengge
    if(N%2==0)
    {
        if(abs(A)>abs(B))
        {
            cout<<"1"<<endl;
        }
        else if (abs(A) == abs(B))
        {
            cout<<"0"<<endl;
        }
        else 
        {
            cout<<"2"<<endl;
        }
    }
    else
    {
        if(A>B)
        {
            cout<<"1"<<endl;
        }
        else if(A==B)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
    }
}
return 0;
}