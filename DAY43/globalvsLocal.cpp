//variable inside funct r local and outside are global
#include <iostream>
using namespace std;
//global-inside code present
int g=0;
void fun()
{
    //local
    int a=5;
    g=g+a;
    cout<<g<<endl;
}
void main()
{
    int x=10;
    g=15;
    fun();
    g++;
    cout<<g<<endl;
}




//CODE
#include <iostream>
using namespace std;
int g=5;
void fun()
{
    int a=10;
    a++;
    g++;
    cout<<a<<" "<<g<<endl;
}
int main()
{
    cout<<g<<endl;
    fun();
    cout<<g<<endl;
}


// CODE
#include <iostream>
using namespace std;
int g = 5;
void fun()
{
    int g = 10;
    g++;
}
int main()
{
    cout << g << endl;
    fun();
    cout << g << endl;
}


//variables in c++ have block level scope
#include <iostream>
using namespace std;
int g = 5;
void fun()
{
    int g = 10;
    {
        int g=0;
        g++;
        cout<<g<<endl;
    }
    cout<<g<<endl;
}
int main()
{
    cout << g << endl;
    fun();
    cout << g << endl;
}


//levels of scope c++ supports
#include <iostream>
using namespace std;
   int x = 10;
int main()
{
    int x=20;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout << ::x << endl;
}


