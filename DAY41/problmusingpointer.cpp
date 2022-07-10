//pointer ki vjh se system crash ho skta run time error k vjh se 
//uninitialized ptr-if we have declare a pointer then we should not use it until we initialized it
//memory leak-related to ptr asa well as heap ,do ptr ek saath use nhi kr skte 1 del krna pdega memory se
//dangling pointer-agr memory deallocate kr diye aur fir ptr ko ek location show krne bole jo exist hi nhi krta to jo error aaega
#include <iostream>
using namespace std;
int main()
{

    return 0;
}
//REFERENCE-use krne se phle initialize krna imp h
//nickname of 1 variable
// CODE
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y=x;
    cout<<x<<endl;
    y++;
    x++;
    cout<<x<<endl;
    cout << &x <<" "<<&y << endl;
    return 0;
}
//cannot declare a reference without initializing it,so reference must be initialized before declare
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x;
    int b=20;
    y=b;
    cout << x << endl;
    y++;
    x++;
    cout << x << endl;
    cout << &x << " " << &y << endl;
    return 0;
}

//POINTER TO A FUNCTION
//any datatype,primitive data type
#include <iostream>
using namespace std;
void display()
{
    cout<<"Hello";
}
int main()
{
display();
    return 0;
}
//instead of directly calling with name we will use ptr to a functn
#include <iostream>
using namespace std;
void display()
{
    cout << "Hello";
}
int main()
{
    //when we declare a pointer to a funct it must be enclosed in brackets 

    //declaration
    void (*fp)();

    //assigning a name to the functn
    //initialization
    fp=display;

    //functn call
    (*fp)();
    return 0;
}

//
#include <iostream>
using namespace std;
int max(int x,int y)
{
    return x>y?x:y;
}
int min(int x,int y)
{
    return x<y?x:y;
}
int main()
{
    int (*fp)(int,int);
    fp=max;
    (*fp)(10,5);
    cout << fp << endl;

    fp=min;
    (*fp)(10,5);
    cout<<fp<<endl;
    return 0;
}