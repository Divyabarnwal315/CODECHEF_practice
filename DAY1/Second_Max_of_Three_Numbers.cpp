#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a, b ,c;
        cin>>a>>b>>c;
        if(a>b && a>c)
        {
            if(c>b)
            {
                cout<<c<<endl;
            }   
            else
            {
                cout<<b<<endl;
            }   
              }
              else if(b>a && b>c)
        {
            if(a>c)
            {
                cout<<a<<endl;
            }   
            else
            {
                cout<<c<<endl;
            }   
              }
              else
              {
                 if(a>b)
                 {
                   cout<<a<<endl;  
                 }
                 else{
                     cout<<b<<endl;
                 }
              }
            }
return 0;
}



/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a < b && a > c || a > b && a < c)
            cout << a << endl;
        else if (b > a && b < c || b < a && b > c)
            cout << b << endl;
        else if (c > a && c < b || c < a && c > b)
            cout << c << endl;
            
        
    }
    return 0;
}
*/


/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3];
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        sort(a, a + 3);
        cout<<a[1] << endl;
      

       }
    return 0;
}
*/




/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
    // second max of 3
    int a, b, c;
    cin >> a >> b >> c;
    cout<<(a+b+c)-max(a,max(b,c))-min(a,min(b,c))<<endl;

    
    }
    return 0;
}
*/



/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // second max of 3 using heap
        int a, b, c;
        cin >> a >> b >> c;
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        pq.pop();   
        cout << pq.top()  << endl;

}

    return 0;
}
*/