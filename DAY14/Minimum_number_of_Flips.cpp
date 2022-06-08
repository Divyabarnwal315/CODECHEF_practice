#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
     //loop chala pdega ith position k liye , fir agr num 1 h to 1 vale count me add hoga nhi count2 me,dono count ka subtract krke /by 2 krdenge,agr dono equal aa gye to 0 out kra denge,else -1 out kra denge
     int N;
     cin>>N;
     int arr[N];
     int count1=0;
     int count2=0;
     for (int i = 0; i < N; i++)
     {
        cin>>arr[i];
        if(arr[i]==1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
     }
     if(count1==count2)
     {
         cout<<"0"<<endl;
     }
     else if((abs(count1-count2))==1)
     {
         cout<<"-1"<<endl;
     }
     else if(abs(count1-count2)%2==0)
     {
         cout<<(abs(count1-count2)/2)<<endl;
     }
     else
     {
         cout<<"-1"<<endl;
     }
}
return 0;
}