//for addn we will use nested for loop
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {2, 2,2,2,2,2};
    int B[2][3]={1,1,1,1,1,1};
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
            }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<C[i][i]<<" ";
        }
        cout << "\n";
    }
    return 0;
}

//for subtraction of two matrices
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {2, 2, 2, 2, 2, 2};
    int B[2][3] = {1, 1, 1, 1, 1, 1};
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

//for multiplication of two matices
#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {2, 2, 2, 2, 2, 2};
    int B[2][3] = {3,3,3,3,3,3};
    int C[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << C[i][i] << " ";
        }
        cout << "\n";
    }
    return 0;
}