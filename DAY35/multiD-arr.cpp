// pattern for 2D array
// 2 5 9
// 6 9 15
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {{2, 5, 9}, {6, 9, 15}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << A[i][j];
        }
        cout << "\n";
    }
    return 0;
}

// addintion of two matrix(we can add them when their dimention is same)
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {{2, 5, 9}, {6, 9, 1}};
    int B[2][3] = {{6, 3, 9}, {9, 5, 2}};
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
