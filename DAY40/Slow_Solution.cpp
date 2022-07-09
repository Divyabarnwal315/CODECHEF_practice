#include <bits/stdc++.h>
using namespace std;
//#define int long long
// int32_t main()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int M, m;
        int D = C / B;
        int power=0;
        // C%B==0,C%B!=0 ->2 1)A==(C/B) (B*B)*A 2)A!=(C/B) 1-A<(C/B) (B*B)*A 2-(C/B)<A ((B*B)*(C/B))+((C%B)*(C%B))
        if (C % B == 0)
        {
            M = min(A, D);
            power = ((B * B) * M);
            cout << power << endl;
        }
        else
        {
            if (C % B != 0)
            {
                if (A == (C / B))
                {
                    power = ((B * B) * A);
                    cout<< power << endl;
                }
                else if (A != (C / B))
                {
                    if(A<(C/B))
                    {
                        power = (B * B) * A;
                        cout<<power<<endl;
                    }
                    else if ((C / B) < A)
                    {
                        power = ((B * B) * (C / B)) + ((C % B) * (C % B));
                        cout<<power<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
//METHOD-2
#include <bits/stdc++.h>
using namespace std;
//#define int long long
// int32_t main()
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        int M, m;
        if((A*B)<=C)
        {
            cout<<(B*B)*A<<endl;
        }
        else if(C%B==0)
        {
            cout<<(C/B)*(B*B)<<endl;
        }
        else
        {
            cout<<((C/B)*(B*B))+((C%B)*(C%B))<<endl;
        }
    }
    return 0;
}
