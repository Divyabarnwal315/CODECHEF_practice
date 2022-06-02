#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int X,Y;
    cin>>X>>Y;
    if (Y > X)
        cout << (Y - X) << endl;
    else
    {
        if (X % 2 == 0 && Y % 2 == 0 || X%2!=0 && Y%2 !=0)
        {
            cout << (X - Y )/ 2 << endl;
        }
        else if(X%2!=0 && Y%2==0 || X%2==0 && Y%2!=0)
        {
           cout<<(((X+1)-Y)/2)+1<<endl;
        }
    }
    
}
return 0;
}


/*
int x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << 0 << endl;
        }

    else if (x > y)
    {
        if ((x - y) % 2 == 0)
        {
            cout << (x - y) / 2 << endl;
        }
        else
        {
            cout << (x - y) / 2 + 2 << endl;
        }
    }
    else
    {
        cout << y - x << endl;
    }
    */