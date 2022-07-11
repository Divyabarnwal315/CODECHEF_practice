// write more than 1 functn with same name btt diff arguments list y c me nhi hota btt c++ me hota h

// sum of two integers
#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << sum(10, 5) << endl;
    cout << sum(12.5f, 3.6f) << endl;
    cout << sum(12, 4, 5) << endl;
    return 0;
}

// FUNCTION TEMPLATE
// funct which are generalised
// for finding the max of two integers
#include <iostream>
using namespace std;

// templat funct
template <class T>
T maxim(T a, T b)
{
    return a > b ? a : b;
}
// int max(int a, int b)
// {
//     return a>b?a:b;
// }
// float max(float a, float b)
// {
//     return a > b ? a : b;
// }
int main()
{
    cout << maxim(10, 5) << endl;
    cout << maxim(12.5, 3.6) << endl;
    cout << maxim(12.5f, 3.6f) << endl;

    return 0;
}

// DEFAULT ARGUMENT
// assingning default values taaki many things we write with the help of single argument
#include <iostream>
using namespace std;

int max(int a = 0, int b = 0, int c = 0)
{
    // for max of 3 num
    return a > b && a > c ? a : (b > c ? b : c);
}
int main()
{
    // 4 diff overloaded funct
    cout << max() << endl;
    cout << max(10) << endl;
    cout << max(10, 13) << endl;
    cout << max(10, 13, 15) << endl;
    return 0;
}

// PARAMETER PASSING METHOD
// 1 Pass by value
//  2-pass by adress
//  3-pass by reference

// PASS BY VALUE CODE
// value of the formal parameters if they r modified they will not reflect into actual parameters
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    cout << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << x << " " << y << endl;
    return 0;
}

// PASS BY ADDRESS
// Address of Actual Parameters are passed to a function, formal parameters must be pointers. Function can indirectly access actual parameters.
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    // this funct is accessing the variables of other functions ,one functn cannot access the variables of other  functn but in c++m we can do that with the help of pointers
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}



// PASS BY REFERENCE
//INLINE FUNCTN V KEH SKTE
// it is name of existing variable
//  Actual parameters are passed as reference to formal parameters, function can modify actual parameters
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    cout<<&a<<" "<<&b<<endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    //y loop k baad call by reference nhi useb krega shyd call by address krle aur compiler apne aap use krlega isiliye complex code nhi likhna h call by reference m
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<i<<endl;
    // }
}
int main()
{
    int x = 10, y = 20;
    swap(x, y);
    cout << &x << " " << &y << endl;
    cout << x << " " << y << endl;
    return 0;
}