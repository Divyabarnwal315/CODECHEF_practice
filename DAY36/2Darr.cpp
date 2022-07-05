// 2-D array
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {{2, 5, 9}, {6, 9, 1}};
    // if we add just 4 elements in first array then the remaining 2 postn will 0 by default
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


//other way of accessing a 2D-array using for each loop
//&-it is reference nd witout this it will give error
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {2, 5,6, 9, 1};
    for (auto& x:A)
    {
        for (auto& y:x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}

///how we can read values in 2D-arr using cin
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {2, 5, 6, 9, 1};
    for (auto& x : A)
    {
        for (auto& y : x)
        {
            cin>>y;
        }
        cout << endl;
    }
    for (auto& x : A)
    {
        for (auto& y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}