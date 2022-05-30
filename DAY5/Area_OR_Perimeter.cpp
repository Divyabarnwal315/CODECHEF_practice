#include <bits/stdc++.h>
using namespace std;
int main(){
int L,B;
cin>>L>>B;
int Area=L*B;
int Peri=2*(L+B);
if(Area>Peri)
{
    cout<<"Area"<<'\n'<<Area<<endl;
}
else if(Peri>Area)
{
    cout<<"Peri"<<'\n'<<Peri<<endl;
}
else
{
    cout<<"Eq"<<'\n'<<Area<<endl;
}
return 0;
}