#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    //next_permutation iterative library for C++
    int num[4];
    int perm[]={0,1,2,3};
    for (int i = 0; i < 4; i++)
    {
        cin>>num[i];
    }
    while(next_permutation(perm,perm+4))
    {
        if (num[perm[0]] * num[perm[3]] == num[perm[1]] * num[perm[2]])
        {
            cout<<"Possible"<<endl;
            return 0;
        }
    }
    cout << "Impossible" << endl;
    return 0;
}
