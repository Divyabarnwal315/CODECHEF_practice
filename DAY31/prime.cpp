// program of sum of factors of number
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "enter number\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    cout << sum << endl;
    return 0;
}
// if the sum of factors of the number is double the number then it is called as perfect number suppose n=6 factors are 1,2,3,6 then sum of factors=12 which is equal to 2*n 2*6 so perfect number.
// FOR PERFECT NUMBER
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "enter number\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (2 * n == sum)
    {
        cout << "PERFECT NUMBER" << endl;
    }
    else
    {
        cout << "Not PERFECT NUMBER" << endl;
    }
    return 0;
}

//Program to find PRIME  number
#include <iostream>
using namespace std;
int main()
{
    int n, i, count = 0;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"It is a PRIME number."<<endl;
    }
    else
    {
        cout<<"It is not a PRIME number."<<endl;
    }
    return 0;
}

//