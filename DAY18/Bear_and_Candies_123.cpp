#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //1 2 1+3=4 2+4=6 4+5=9 6+6=12 
    int A,B;
    cin>>A>>B;
    int Limak=1;
    int Bob=2;
    while(true)
    {
        if(A-Limak>=0)
        {
            A=A-Limak;
            Limak+=2;
            if(B-Bob>=0)
            {
                B=B-Bob;
                Bob+=2;
            }
            else
            {
                cout<<"Limak"<<endl;
            break;
            }
        }
        else
        {
            cout<<"Bob"<<endl;
            break;
        }
    }
    /*int countO=1;
    int countE=2;
    int O=3;
    int E=4;
    while(countO<A)
    {
        countO+=O;
        O=O+2;
    }
    if(A==1)
    {
        countO=1;
    }
    else
    {
    countO=countO-O+2;
    }
    //cout<<countO<<" ";
    while(countE<B)
    {
        countE+=E;
        E=E+2;
    }
     if(B==2)
    {
        countE=2;
    }
    else
    {
    countE=countE-E+2;
    }
    //cout<<countE<<endl;
if(countE>countO)
{
    cout<<"Bob"<<endl;
}
else if(countE<countO)
{
    cout<<"Limak"<<endl;
}

cout<<countO<<endl;
cout<<countE<<endl;
*/ 
/*if(countO==A && countE==B)
{
    if(A>B)
    {
        cout<<"Limak"<<endl;
    }
    else if(B>A)
    {
        cout<<"Bob"<<endl;
    }
}
else if(countO==A && countE!=B)
{  
        cout<<"Limak"<<endl;
}
else if(countO!=A && countE==B)
{   
        cout<<"Bob"<<endl;
}
else if(countO!=A && countE!=B)
{   
    if(countO>countE)
    {
        cout<<"Limak"<<endl;
    }
    else if(countO<countE)
    {
        cout<<"Bob"<<endl;
    }
    */

}
return 0;
}