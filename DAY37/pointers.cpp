// INTRO
//  1-Data Variable int x=10;
//  2-Adress Variable int *p;(*p is the declaration of add variable)
//  p=&x (initialization of address variable)
// cout<<*p; (dereferensing)
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;

    return 0;
}

// program can directly access to stack but for heap it can access indirectly using pointers only
// java me nhi hota y to directly access nhi kr skte pointer ki help se
// PROGRAM FOR ACESSING HEAP MEMORY USING POINTERS(Dynamically)
// pointer can be treated as name of an array
#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    p[0] = 12;
    p[1] = 13;
    cout << p[1] << endl;

    delete[] p;
    // nullptr is made for pointer in c++
    p = nullptr;

    return 0;
}
// array in heap
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[size];
    cout << sizeof arr << endl;
    return 0;
}
// create a new array again inside heap with a diff size and assign it to p
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int *p = new int[size];

    cout << "Enter new size";
    cin >> size;
    p = new int[size];

    return 0;
}
//simple way of same code
#include <iostream>
using namespace std;
int main()
{
    int size;
    int *p = new int[20];
//phle del krenge p ko nhi memory leak ho jaegi
    delete []p;
    p = new int[40];

    return 0;
}