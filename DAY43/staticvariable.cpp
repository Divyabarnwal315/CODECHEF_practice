// accessible only inside the functn where they are declared
#include <iostream>
using namespace std;
void fun()
{
    // static k vjh se variable vps nhi declare hoga isliye duse fun ki value 12 aa jaegi
    static int s = 10;
    s++;
    cout << s << endl;
}
int main()
{
    fun();
    fun();
}

// RECURSIVE FUNCTION
#include <iostream>
using namespace std;
void fun(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fun(n - 1);
        // fun(n - 1);
        // cout<<n<<endl;
        // y krne p output ulta ho jaega
    }
}
int main()
{
    int x = 5;
    fun(x);
}

// Program for Linear Search using Functions
#include <iostream>
using namespace std;
int Search(int A[], int n, int key)
{
    for (int i = 0; i < n; i++)
        if (key == A[i])
            return i;
    return 0;
}
int main()
{
    int A[] = {2, 4, 5, 7, 10, 9, 13};
    int k;
    cout << "Enter an Element to be Searched:";
    cin >> k;
    int index = Search(A, 7, k);
    cout << "Element found at index :" << index << endl;
}