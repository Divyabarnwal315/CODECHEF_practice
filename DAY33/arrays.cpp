// Array is a collection of similar data elements under one name,
//  each element is accessible using its index
//  •Memory for array is allocated contagiously
//  •For-each loop is used for accessing array
//  •N-dimension arrays are supported by C++
//  •Two-Dimensional Arrays are sued for Matrices
//  •Array can be created in Stack or Heap Section of memory
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}

// initialising an array
#include <iostream>
using namespace std;
int main()
{
    float A[] = {2.5f, 5.6f, 9, 8, 7};
    //it works on collection of elements only for each loop
    for (auto x : A)
    {
        cout << x << endl;
    }
    return 0;
}

//add all elements of an array
#include <iostream>
using namespace std;
int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7} ;
    int n = 7, sum = 0;
    for (int i = 0;i<7; i++)
    {
        sum = sum + A[i];
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}


//finding max element of array
#include <iostream>
using namespace std;
int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7, max;
    max = A[0];
    for(int i=1; i<7; i++)
{
    if(A[i]>max)
    {
        max=A[i];
    }
}
    cout<<"Maximum no. is"<<max;
    return 0;
}