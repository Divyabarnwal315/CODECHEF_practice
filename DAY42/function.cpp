// collection of funct is called libraries
// we should not use cin and cout within funct
#include <iostream>
using namespace std;
void display()
{
    cout << "Hello";
}
int main()
{
    display();
    return 0;
}




// taking two float nums and then adding it and return result
#include <iostream>
using namespace std;

// prototype or header of a functn or signature
float add(float x, float y)
{
    // implementation of the functn
    float z;
    z = x + y;
    return z;
}
int main()
{
    float x = 2.3, y = 7.9, z;
    z = add(x, y);
    cout << z << endl;

    return 0;
}




//taking 3 nums and their max
#include <iostream>
using namespace std;
int max(int a,int b,int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int x=10,y=15,z=5,r;
    r=max(x,y,z);
    cout<<r<<endl;

    return 0;
}



