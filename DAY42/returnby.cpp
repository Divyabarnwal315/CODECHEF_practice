//RETURN BY ADDRESS
// when funct takes address as parameters then it is called return by address
#include <iostream>
using namespace std;

int *fun()
{
    int *p=new int[5];
    for (int i = 0; i < 5; i++)
    {
        p[i]=5*i;
    }
    cout<<p<<endl;
    return p;
}
int main()
{
    int *q=fun();
    cout<<q<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<q[i]<<endl;
    }
    return 0;
}


//RETURN BY REFERENCE
#include <iostream>
using namespace std;

int & fun(int &x)
{
    return x;
}
int main()
{
    int a=10;
    fun(a)=25;
    cout<<a<<endl;
    return 0;
}