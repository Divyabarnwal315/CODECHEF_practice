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
    p = nullptr;

    return 0;
}
//
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter number of elements: ";
    cin>>size;
    int arr[size];
    cout<<sizeof arr<<endl;
    return 0;
}