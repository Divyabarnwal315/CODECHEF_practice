#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    float salary , answer;
    cin>>salary;
    if(salary<1500)
    {
    answer=salary+0.1*salary+0.9*salary;
    }
    else
    {
    answer=500+1.98*salary;
    }
    printf("%0.2f\n",answer);
}
return 0;
}