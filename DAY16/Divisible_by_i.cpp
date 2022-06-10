#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    int n;
    cin >> n;
    int a[n];
    int firstValue;
    if (n % 2 != 0)
    {
        firstValue=n/2+1;
        int oddValue=firstValue-1,evenValue=firstValue;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a[i] = evenValue;
                evenValue++;
            }
            else
            {
                a[i] = oddValue;
                oddValue--;
            }
        }
    }
    else 
    {
        firstValue=n/2;
        int oddValue=firstValue+1,evenValue= firstValue;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0)
            {
                a[i]=evenValue;
                evenValue--;

            }
            else
            {
                a[i]=oddValue;
                oddValue++;

            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
  cout<<endl;
}
return 0;
}
/*input 
2
3
8
10
7
9
1 2
2 1 3
4 5 3 6 2 7 1 8
5 6 4 7 3 8 2 9 1 10
4 3 5 2 6 1 7
5 4 6 3 7 2 8 1 9
*/