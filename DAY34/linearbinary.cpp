// linear search
#include <iostream>
using namespace std;
int main()
{
    // searching is finding the location of elements
    // O(n)
    int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9};
    int key;
    cout << "Enter a Key element ";
    cin >> key;
    for (int i = 0; i < 10; i++)
    {
        if (key == A[i])
        {
            cout << "The Key element is found at " << i << endl;
            exit(0);
        }
    }
    cout << "Key element not found" << endl;
    return 0;
}

// binary search
// elements must be in sorted order
// floor value is middle =low+high/2
// O(logN)
#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {6, 8, 13, 17, 20, 22, 25, 28, 30, 35};
    int l = 0, h = 9, key, mid;
    cout << "Enter key";
    cin >> key;
    int mid = (l + h) / 2;
    while (l <= h)
    {
        if (key == arr[mid])
        {
            cout << "Found at" << mid;
            return 0;
        }
        else if (key < arr[mid])
    }
    return 0;
}
//sum of elements in array
#include <iostream>
using namespace std;
int main()
{
    int A[10] = {2, 4, 6, 8, 12, 3, 5, 7, 9, 11};
    int sum = 0;
    for (int i = 0; i < 10; i++)
        sum = sum + A[i];
    cout << "Sum of all elements is" << sum << endl;
    return 0;
}
//nested for loop
#include <iostream>
using namespace std;
int main()
{
for (int i = 1; i <= 3; i++)
{
    for (int j = 1; j <= 5; j++)
    {
        cout << "(" <<i<< ", "<<j<<") "<<" ";
    }
    cout<<endl;
}
return 0;
}
