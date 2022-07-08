#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;

    cout << p << endl;
    //for 2 bytes our comp will eight bytes
    cout << p+2 << endl;

    return 0;
}

//here we will get data on first and second location both
#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;

    cout << *p << endl;
    cout << *(p + 2) << endl;

    return 0;
}


//code for displaying all elements in array using for loop(counter cntrl for loop)
#include <iostream>
using namespace std;
int main()
{
    int A[5]{2, 4, 6, 8, 10};
    int *p = A;

    for (int i = 0; i < 5; i++)
    {
        // we can also write if as
        // cout<<i[A] we will get same
        // cout<<*(A+i)<<endl; this will also give same output where * will adresses 
        cout<<A[i]<<endl;
        //if we change it by A+i only then we will get last 2 digit multiple of 4
        //p+i also gives same result
        //*(p+i) we print all elements of array
        //p[i] will also work well 
    }
    
    return 0;
}
