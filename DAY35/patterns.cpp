//pattern using nested for loop
//SQUARE PATTERN
// 1 2 3 4 
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
#include <iostream>
using namespace std;
int main()
{
    int count=1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}

//PATTERN
// *
// **
// ***
// ****
#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(i>=j)
            {
                cout<<"*";
            }
        }
        cout << "\n";
    }
    return 0;
}


//PATTERN
// ****
//  ***
//   **
//    *
#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(j>=i)
            {
                cout<<"*";
            }
        }
        cout << "\n";
    }
    return 0;
}

//PATTERN
// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main()
{
    int count = 1;
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5-i+1; j++)
        {
                cout << "*";          
        }
        cout << "\n";
    }
    return 0;
}

//PATTERN
//     *
//    **
//   ***
//  ****
// *****
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=5; j++)
        {
            if (i+j>5)
            {
                cout << "*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout << "\n";
    }
    return 0;
}

//PATTERN

