#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
{
    //hmne phle N ko arr m declare kra,arr[i] input kra,ulti loop  chala li,fir check kra jis index p X se  km value h uspe +1 krake out kra diya
  int N,X;
  cin>>N>>X;
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin>>arr[i];
  }
  int count=0;
  for (int i = N-1; i >=0; i--)
  {
     if(arr[i]<X)
     {
         count=i+1;
         //cout<<X<<" "<<arr[i]<<endl;
         break;
     }
  }
  cout<<count<<endl;
}
return 0;
}