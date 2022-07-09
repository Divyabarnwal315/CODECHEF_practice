//CODES FOR POINTER ARITHMETIC OR POINTER IN ARRAY
//in begin dispplay adress in p then in loop pointer p is increamenting and displaying all elements in array then again printing adress in p  
#include <iostream>
using namespace std;
int main()
{
int A[5]{2,4,6,8,10};
int *p=A;
cout<<p<<endl;
for (int i = 0; i < 5; i++)
{
    cout<<*p<<endl;
    p++;
}
    cout<<p<<endl;
    return 0;
}

//taken p pointing on A and take one more pointer q and that will point on A of 4 then we write q-p we get difference btw 1 element where p is pointing and 4 element where q is pointing so diff is 4 and if we chng it by p-q we get -4 which means 2 pointer is far away and 1 pointer is in beginning
#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A,*q=&A[4];
    cout << p-q << endl;
    
    return 0;
}