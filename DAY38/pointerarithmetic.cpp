//pointer arithmetic
#include <iostream>
using namespace std;
int main()
{
    //pointer kitta move krega y data type pointer p depend krta h
    int  A[5] {2,4,6,8,10};
    int *p=A;

    cout<<*p;
    return 0;
}

//using pointer arithmetic
#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;

    cout << *p<<endl;
    p++;
    cout<<*p<<endl;

    return 0;
}

//pointer b to 1 location and printed the data, move the pointer to next location,printed data,move the tappoint to previous location then again print data
#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;

    cout << *p << endl;
    p++;
    cout << *p << endl;
    p--;
    cout<<*p<<endl;
    
    return 0;
}