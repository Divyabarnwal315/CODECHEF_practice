// Write a program to calculate avg of all elements on array
#include <iostream>
using namespace std;
int main()
{
    int N, i;
    float num[100], sum = 0.0, avg;
    cout << "Enter total num of elements: " << endl;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cout << "(" << i + 1 << ")"
             << "-Enter number: ";
        cin >> num[i];
        sum = sum + num[i];
    }
    avg = sum / N;
    cout << "Average = " << avg;
    return 0;
}

// Write  a program to find the multiplication of two matrices
// colns of first matrix=rows of 2nd matrix
#include <iostream>
using namespace std;
int main()
{
    int A[10][10], B[10][10], mul[10][10], R1, R2, C1, C2, i, j, k;
    cout << "Enter rows and cols of first matrix: ";
    cin >> R1 >> C1;
    cout << "Enter rows and cols of second matrix: ";
    cin >> R2 >> C2;
    if (C1 != R2)
    {
        cout << "Multiplication can't be  possible";
        return 0;
    }
    // Storing rc elements of 1 matrix
    cout << "\n"
         << "Enter elements of Matrix-1: " << endl;
    for (int i = 0; i < R1; ++i)
    {
        for (int j = 0; j < C1; ++j)
        {
            cout << "Enter elements a" << i + 1 << j + 1 << " ";
            cin >> A[i][j];
        }
    }
    // Storing rc elements of 2 matrix
    cout << "\n"
         << "Enter elements of Matrix-2: " << endl;
    for (int i = 0; i < R2; ++i)
    {
        for (int j = 0; j < C2; ++j)
        {
            cout << "Enter elements b" << i + 1 << j + 1 << " ";
            cin >> B[i][j];
        }
    }
    // Multiplying matrix a and b and also storing elements in array mult
    for (int i = 0; i < R1; ++i)
    {
        for (int j = 0; j < C2; ++j)
        {
            mul[i][j] = 0;
            for (int k = 0; k < C1; ++k)
            {
                mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Now dispalying the final outcome of product of two matrix
    cout << endl
         << "Output Matrix: " << endl;
    for (int i = 0; i < R1; ++i)
    {
        for (int j = 0; j < C2; ++j)
        {
            cout << " " << mul[i][j];
            if (j == C2 - 1)
            {
                cout << endl;
            }
        }
    }
    return 0;
}
// REVISION