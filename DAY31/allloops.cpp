#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    while (a < 10)
    {
        cout << "a " << a;
        a++;
    }
    int b = 0;
    do
    {
        cout << "b " << b;
        b++;
    } while (b < 10);
    for (int i = 0; i < 10; i++)
    {
        cout << "i " << i;
    }
    return 0;
}
// for making for loop infinite we use for(;;)
#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    for (;;)
    {
        cout << i << " Hello\n";
        i++;
        if (i > 10)
            break;
    }
    return 0;
}
// mulplication table using loops
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter n\n";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        cout << n << "x" << i << "=" << i * n;
        cout << endl;
    }
    return 0;
}
// sum of first n natural numbers
// formula=n(n+1)/2
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "Sum to First " << n << " Natural no.s is " << sum;
    return 0;
}
// program for factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int n, i, fact = 1;
    cout << "Enter n\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "factorial of"<<" " << n <<" "<< "is" << " "<<fact;
    cout << endl;
    return 0;
}
//program for finding factors of a number
#include <iostream>
using namespace std;
int main()
{
    int n ,i;
    cout<<"enter number\n";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
